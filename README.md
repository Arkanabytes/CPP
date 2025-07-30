# Repositorio de Programación en C++

## Descripción

Este repositorio contiene una colección de problemas básicos de programación en el lenguaje C++, diseñados para estudiantes y personas que están aprendiendo programación. Aquí encontrarás ejercicios prácticos que cubren los conceptos fundamentales de la programación en C++.

## Temas Cubiertos

- **Condicionales** (if, else if, else)
- **Estructuras de control** (switch)
- **Bucles** (for, while, do-while)
- **Iteradores**
- **Estructuras de datos básicas:**
  - Listas
  - Pilas (Stacks)
  - Colas (Queues)
  - Estructuras (Structs)
  - Árboles (Trees)

## Estructura del Repositorio

```
CPP/
├── condicionales/          # Ejercicios con if, else, operadores lógicos
├── switch/                 # Ejercicios con estructura switch-case
├── bucles/                 # Ejercicios con for, while, do-while
├── iteradores/             # Uso de iteradores en C++
├── listas/                 # Implementación y manejo de listas
├── pilas/                  # Implementación de pilas (LIFO)
├── estructuras/            # Definición y uso de structs
├── colas/                  # Implementación de colas (FIFO)
├── arboles/                # Estructuras de árboles binarios
└── README.md               # Este archivo
```

## Cómo usar este repositorio

### 1. Clonar el repositorio
```bash
git clone https://github.com/Arkanabytes/CPP.git
cd CPP
```

### 2. Compilar y ejecutar los programas
```bash
g++ nombre_archivo.cpp -o nombre_programa
./nombre_programa
```

### 3. Compilar con estándares específicos
```bash
g++ -std=c++11 nombre_archivo.cpp -o nombre_programa
g++ -std=c++17 nombre_archivo.cpp -o nombre_programa
```

## Requisitos del Sistema

- **Compilador:** GCC, Clang, o Microsoft Visual C++
- **Estándar C++:** C++11 o superior
- **Sistema Operativo:** Windows, Linux, macOS

### Instalación de Compilador

**En Ubuntu/Debian:**
```bash
sudo apt update
sudo apt install g++
```

**En Windows:**
- Instalar MinGW-w64 o Visual Studio Community
- O usar Windows Subsystem for Linux (WSL)

**En macOS:**
```bash
# Instalar Xcode Command Line Tools
xcode-select --install
```

## Conceptos por Tema

### Condicionales
- Operadores de comparación (==, !=, <, >, <=, >=)
- Operadores lógicos (&&, ||, !)
- Estructuras if-else anidadas

### Bucles
- Bucle `for` para iteraciones conocidas
- Bucle `while` para iteraciones condicionales
- Bucle `do-while` para al menos una iteración
- Control de flujo (`break`, `continue`)

### Estructuras de Datos
- **Listas:** Manejo dinámico de elementos
- **Pilas:** Estructura LIFO (Last In, First Out)
- **Colas:** Estructura FIFO (First In, First Out)
- **Árboles:** Estructura jerárquica de datos

## Ejemplos de Uso

### Ejemplo de Condicional
```cpp
#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    
    if (edad >= 18) {
        cout << "Eres mayor de edad" << endl;
    } else {
        cout << "Eres menor de edad" << endl;
    }
    
    return 0;
}
```

### Ejemplo de Bucle
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Número: " << i << endl;
    }
    return 0;
}
```

## Contribuir

Las contribuciones son bienvenidas. Si quieres agregar más ejercicios o mejorar los existentes:

1. Haz un fork del repositorio
2. Crea una nueva rama (`git checkout -b nueva-funcionalidad`)
3. Realiza tus cambios
4. Haz commit (`git commit -am 'Agregar nueva funcionalidad'`)
5. Push a la rama (`git push origin nueva-funcionalidad`)
6. Crea un Pull Request

## Licencia

Este proyecto está bajo la Licencia MIT. Consulta el archivo `LICENSE` para más detalles.

## Autor

**Arkanabytes**
- GitHub: [@Arkanabytes](https://github.com/Arkanabytes)

## Contacto

Si tienes preguntas o sugerencias:
- Abrir un issue en este repositorio
- Contactarme a través de GitHub

---

## Nota para Estudiantes

Este repositorio está diseñado con fines educativos. Se recomienda:

1. **Intentar resolver los ejercicios por cuenta propia primero**
2. **Comparar la solución con la proporcionada**
3. **Experimentar modificando el código**
4. **Practicar regularmente para mejorar las habilidades**

¡Happy Coding!

## Authors


* [*Consuelo Alejandra Pinto Toro*](https://github.com/hatejandra)
