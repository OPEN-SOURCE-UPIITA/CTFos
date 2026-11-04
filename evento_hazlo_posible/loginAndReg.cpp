#include <iostream>
#include <fstream>
#include <string>

#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QMessageBox>
#include "main.moc" // Necesario si defines clases con Q_OBJECT en un solo archivo .cpp

#include "ui_loginwindow.h"
#include "ui_registerdialog.h"
using namespace std;

bool verifyLogin( const string& username,
		  const string& password,
		  const string& filename){

  ifstream inFile(filename);

  if(!inFile){
    cout<<"No existe el archivo.\n";
    return false;
  }

  string line;
  string record = username + ',' + password;

  while(getline(inFile,line)){
    if(line==record){
      return true;
    }
  }
  return false;
}


void registerNewUser(const string &username,
		     const string &password, 
		     const string &filename){

  ofstream outFile(filename, ios::app);

  if(!outFile){
    cout << "Error: No se pudo abrir el archivo para escritura.\n";
    return;
  }

  outFile << username << "," << password << "\n";
  
}

bool verifyLogin(const string& username, const string& password, const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        return false;
    }
    string line;
    string record = username + ',' + password;
    while (getline(inFile, line)) {
        if (line == record) {
            return true;
        }
    }
    return false;
}

void registerNewUser(const string& username, const string& password, const string& filename) {
    ofstream outFile(filename, ios::app);
    if (!outFile) {
        return;
    }
    outFile << username << "," << password << "\n";
}

// --- CLASE DE LA VENTANA DE REGISTRO ---
class RegisterWidget : public QWidget {
    Q_OBJECT
public:
    RegisterWidget(QWidget *parent = nullptr) : QWidget(parent) {
        ui.setupUi(this);

        // Conectar botones
        connect(ui.btnRegisterSubmit, &QPushButton::clicked, this, &RegisterWidget::handleRegister);
        connect(ui.btnBack, &QPushButton::clicked, this, &RegisterWidget::close);
    }

private slots:
    void handleRegister() {
        QString user = ui.lineEditNewUser->text();
        QString pass = ui.lineEditNewPass->text();

        if (user.isEmpty() || pass.isEmpty()) {
            QMessageBox::warning(this, "Error", "Por favor completa todos los campos.");
            return;
        }

        registerNewUser(user.toStdString(), pass.toStdString(), "users.txt");
        QMessageBox::information(this, "Éxito", "¡Usuario registrado correctamente!");
        this->close();
    }

private:
    Ui::RegisterDialog ui;
};

// --- CLASE DE LA VENTANA DE LOGIN ---
class LoginWindow : public QMainWindow {
    Q_OBJECT
public:
    LoginWindow(QWidget *parent = nullptr) : QMainWindow(parent) {
        ui.setupUi(this);

        // Conectar botones
        connect(ui.btnLogin, &QPushButton::clicked, this, &LoginWindow::handleLogin);
        connect(ui.btnGoToRegister, &QPushButton::clicked, this, &LoginWindow::openRegister);
    }

private slots:
    void handleLogin() {
        QString user = ui.lineEditUser->text();
        QString pass = ui.lineEditPass->text();

        if (verifyLogin(user.toStdString(), pass.toStdString(), "users.txt")) {
            QMessageBox::information(this, "Acceso Concedido", "¡Bienvenido al sistema CTF, Operador!");
        } else {
            QMessageBox::critical(this, "Acceso Denegado", "Usuario o contraseña incorrectos.");
        }
    }

    void openRegister() {
        RegisterWidget *regWindow = new RegisterWidget();
        regWindow->setAttribute(Qt::WA_DeleteOnClose);
        regWindow->show();
    }

private:
    Ui::LoginWindow ui;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    LoginWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
