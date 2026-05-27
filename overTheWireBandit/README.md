
## Tutorial Inicial: OverTheWire - Bandit


[Bandit](https://overthewire.org/wargames/bandit/)

El juego Bandit está diseñado estrictamente para principiantes absolutos en ciberseguridad y entornos Linux. Su objetivo es enseñar los conceptos básicos esenciales que se necesitan para abordar otros retos y plataformas competitivas de mayor complejidad.

### Dinámica del Juego

Al igual que la mayoría de los wargames, este reto está organizado por niveles consecutivos.

* El proceso inicia en el **Nivel 0** y el objetivo es resolverlo para obtener la información de acceso (la bandera o contraseña) necesaria para el **Nivel 1**.
* La documentación de cada nivel en el sitio web oficial detalla los comandos sugeridos y las pistas necesarias para avanzar desde el escenario inmediatamente anterior.

Es completamente normal encontrar situaciones en las que no se tenga claridad sobre cómo proceder. El propósito fundamental de Bandit es el autoaprendizaje a través de la lectura y la investigación.

---

### Conexión al Servidor mediante SSH

Para acceder a cada nivel del juego, es necesario conectarse de forma remota al servidor de OverTheWire utilizando el protocolo SSH (Secure Shell). La sintaxis básica para iniciar una conexión es la siguiente:

```bash
ssh usuario@host_o_ip -p puerto

```

Para el **Nivel 0** de Bandit, los datos de conexión oficiales son:

* **Usuario (host):** `bandit0`
* **Servidor (IP/Host):** `bandit.labs.overthewire.org`
* **Puerto:** `2220`

Por lo tanto, el comando exacto que debes ejecutar en tu terminal de Linux para iniciar el reto es:

```bash
ssh bandit0@bandit.labs.overthewire.org -p 2220

```

*Nota: Al ejecutar el comando por primera vez, la terminal solicitará confirmar la autenticidad del servidor escribiendo `yes`. Posteriormente, solicitará la contraseña de acceso, la cual para el nivel 0 es textualmente `bandit0` (los caracteres no se mostrarán en pantalla mientras escribes por motivos de seguridad).*

---

### Metodología de Investigación Recomendada

Cuando no se conozca la forma de continuar o la sintaxis de una herramienta dentro del servidor, se deben agotar las siguientes instancias en el orden establecido:

1. **Manuales del Sistema (Man Pages):** Si se conoce el nombre de un comando pero no sus parámetros, se debe consultar su manual integrado ejecutando en la terminal:
```bash
man <comando>

```


*Ejemplo: `man ls` para conocer las opciones del comando de listado.*
*Nota: Para salir de la interfaz del manual se debe presionar la tecla `q`.*
2. **Comandos Internos de la Shell (Built-ins):** En caso de que no exista una página de manual (man page), es probable que el comando sea una función interna de la propia terminal. Para estos casos, se debe utilizar el comando de ayuda integrado:
```bash
help <comando>

```


*Ejemplo: `help cd` para entender el funcionamiento del cambio de directorio.*
3. **Motores de Búsqueda y Documentación Externa:** El uso eficiente de los motores de búsqueda es una habilidad crítica en el ámbito de la ciberseguridad. Se recomienda documentarse de forma externa ante conceptos teóricos nuevos.

