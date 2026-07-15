# Sistema de Gestión de Biblioteca (C++)

Un sistema de consola compacto en C++ diseñado para administrar el inventario de libros, el registro de usuarios y el control básico de préstamos de forma estática.

## 📂 Estructura del Proyecto

*   **`funciones.h`**: Define las estructuras de datos (`persona`, `libro`) y los prototipos de las funciones principales.
*   **`funciones.cpp`**: Contiene la implementación de la lógica (registro, listados, búsquedas secuenciales, préstamos y devoluciones).
*   **`main.cpp`**: Punto de entrada del programa que gestiona el menú interactivo mediante consola.
*   **`Biblioteca.dev`**: Archivo de configuración del proyecto listo para abrirse en el IDE Dev-C++.

## ⚙️ Características Principales

*   **Gestión de Libros:** Permite registrar (hasta 670 registros), listar y buscar obras por nombre, autor, ID o estado de disponibilidad.
*   **Gestión de Usuarios:** Registro de perfiles con DNI, correo institucional, teléfono y código universitario.
*   **Módulo de Préstamos:** Flujo básico para asociar la salida de un libro con el código de un estudiante verificado.

## 🚀 Compilación y Ejecución

### Opción 1: Usando Dev-C++
1. Abre el archivo de proyecto `Biblioteca.dev`.
2. Presiona `F11` (Compilar y Ejecutar).

### Opción 2: Usando la terminal (g++)
Compila los archivos fuente con el siguiente comando:
```bash
g++ main.cpp funciones.cpp -o Biblioteca
./Biblioteca
```
