---

# CTFos

## Proyecto de Ciberseguridad

Este es el repositorio oficial para el proyecto de ciberseguridad CTFos de la asociacion OpenSource UPIITA

---

## Horarios de Sesión

* **Días de trabajo:** [Martes, Miércoles, Viernes]
* **Horario:** [14:30 - 16:00]

---

## ¿Qué es un CTF (Capture The Flag)?

Un CTF es una competencia de seguridad informática diseñada para poner a prueba habilidades técnicas mediante la resolución de retos prácticos. El objetivo es explotar vulnerabilidades, analizar sistemas o descifrar códigos para encontrar una cadena de texto oculta en un formato específico, llamada bandera, la cual demuestra que el reto ha sido superado con éxito.

---

## Getting Started (Primeros Pasos)

Para formar parte activa de este proyecto, es indispensable configurar el entorno de trabajo en la primera sesión y registrarse en el repositorio.

### 1. Entorno Linux

Se recomiendan distribuciones orientadas a auditoría y pruebas de penetración, tales como:

* Kali Linux
* Parrot OS
* BlackArch Linux

Nota: No estás limitado a estas opciones y puedes usar la distribución de tu preferencia. La instalación puede realizarse mediante Máquina Virtual (VM), Dual Boot o un dispositivo de almacenamiento externo (SSD o USB).

### 2. Tutorial de Registro e Inducción a Git

Sigue estos pasos desde la terminal para registrar tu asistencia y crear tu espacio de trabajo:

#### Paso A: Configurar llaves SSH (Si no se cuenta con una)

1. Genera una nueva llave SSH en la terminal de Linux:
```bash
ssh-keygen -t ed25519 -C "tu_correo@ejemplo.com"

```


Presiona Enter para guardarla en la ruta por defecto y asígnale una contraseña si lo consideras necesario.

2. Arranca el agente SSH y añade la llave:

```bash
   eval "$(ssh-agent -s)"
   ssh-add ~/.ssh/id_ed25519

```

3. Muestra la llave pública en la terminal, cópiala por completo y agrégala a tu cuenta de GitHub en la sección de Settings -> SSH and GPG keys:
```bash
cat ~/.ssh/id_ed25519.pub

```

#### Paso B: Descargar el repositorio y crear la rama personal
1. Clona este repositorio utilizando el protocolo SSH:
```bash
git clone git@github.com:OPEN-SOURCE-UPIITA/CTFos.git
cd CTFos
```
2. Crea y muévete de inmediato a tu propia rama de trabajo personal:

```bash
git checkout -b "nombre_apellido"

```

#### Paso C: Registrar el nombre del integrante
1. Abre el archivo `integrantes.txt` con un editor de texto (nano, vim, vsc, etc.).
2. Añade tu nombre completo al final del archivo.
3. Guarda los cambios.

#### Paso D: Guardar y enviar los cambios
1. Agrega el archivo modificado al área de preparación:
```bash
git add integrantes.txt

```

2. Realiza el commit con un mensaje descriptivo:
```bash
git commit -m "Registro de Nombre Apellido al equipo"

```

3. Sube la rama local al servidor remoto de GitHub:
```bash
git push origin nombre_apellido

```

4. **Validación:** Accede a la página del repositorio en GitHub y abre un Pull Request (PR) hacia la rama main para que el líder de proyecto revise e integre los cambios de forma oficial.

> Advertencia: A partir de este momento, antes de realizar cualquier actualización o push posterior, es obligatorio sincronizar el repositorio local ejecutando el comando:
> ```bash
> git pull origin main
> 
> ```
> 
> 

---

## Estructura de Trabajo

Para mantener el orden en la entrega de reportes y soluciones, el directorio de retos y ejercicios sigue la siguiente jerarquía de archivos:

```text
Maquinas_CTF/
├── README.md                 # Enlace y descripción de los retos
├── integrante01_nombre/
│   ├── Nombre_Apellido_flags.txt      # Banderas obtenidas
│   └── Nombre_Apellido_commands.txt   # Bitácora de comandos y solución
└── integrante02_nombre/
    ├── Nombre_Apellido_flags.txt
    └── Nombre_Apellido_commands.txt

```

* Cada integrante contará con su propia carpeta bajo la sintaxis `nombre_apellido`.
* El archivo `_commands.txt` debe contener una explicación breve o la lista secuencial de comandos utilizados para resolver la máquina.

---

## Consideraciones de las FLAGS

Buscamos que cada integrante desarrolle un pensamiento crítico y resuelva de forma autónoma los ejercicios mediante la lectura de manuales (man), documentación oficial y herramientas de búsqueda.

El aprendizaje colaborativo implica solicitar apoyo en ocasiones; por lo tanto, el nivel de asistencia empleado se declarará de forma honesta en el archivo `Nombre_Apellido_flags.txt` utilizando la siguiente nomenclatura:

* `flag{ejemplo_de_bandera}` -> **Bandera obtenida de manera limpia:** El reto fue solucionado de forma autónoma leyendo documentación y manuales.
* `flag{ejemplo_de_bandera}*` -> **Bandera obtenida con ayuda parcial:** Se requirió de alguna pista externa para destrabar el avance.
* `flag{ejemplo_de_bandera}**` -> **Bandera obtenida con ayuda completa:** El reto se resolvió siguiendo directamente un tutorial, una guía paso a paso o asistencia directa.

---

## Cierre de Sesión

Al finalizar cada sesión de trabajo establecida en el calendario, cada integrante deberá realizar el add, commit y push correspondiente a su rama personal para asegurar el respaldo diario de sus avances en el servidor.

