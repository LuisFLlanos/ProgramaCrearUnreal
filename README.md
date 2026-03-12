# 📚 Prácticas de Programación en C++

Repositorio que contiene diferentes programas desarrollados en **C++** como parte de tareas y prácticas de programación.
Los ejercicios aplican conceptos como **funciones, programación orientada a objetos (POO), control de flujo y lógica de juegos**.

---

# 📂 Contenido del repositorio

## 🚌 Sistema de Autobús

Programa que simula la gestión básica de un autobús.

### Características

* Registro de **asientos disponibles**
* Control de **pasajeros que suben**
* Recarga de **combustible**
* Cálculo del **dinero recaudado**
* Validación de datos ingresados

### Conceptos utilizados

* Clases
* Encapsulamiento
* Métodos
* Validación de entrada

---

## 🎲 Mini Cacho

Programa que simula un pequeño juego de dados.

### Reglas del juego

El usuario introduce **3 dados ordenados** y el programa calcula el puntaje.

| Resultado                     | Puntaje           |
| ----------------------------- | ----------------- |
| Trío (3 dados iguales)        | 50 puntos         |
| Escalera (dados consecutivos) | 25 puntos         |
| Otro resultado                | Suma de los dados |

### Funciones implementadas

* `EsTrio()` → verifica si los dados son iguales
* `EsEscalera()` → verifica si forman una secuencia
* `CalcularPuntaje()` → calcula el puntaje de la ronda
* `ImprimirMarcador()` → muestra los resultados
* `JugarPartida()` → controla todas las rondas

---

## ✊✋✌ Juego Piedra, Papel o Tijera (POO)

Juego entre **tres jugadores** usando **programación orientada a objetos**.

### Características

* Jugadores con **nombre y puntaje**
* Selección de jugadas:

  * `1` → Piedra
  * `2` → Papel
  * `3` → Tijera
* Evaluación automática del ganador
* Cálculo de **eficiencia de cada jugador**

### Conceptos utilizados

* Clases
* Métodos privados y públicos
* Interacción entre objetos
* Cálculo de estadísticas

---

# ⚙️ Cómo compilar los programas

Usando **g++** en la terminal:

```bash
g++ archivo.cpp -o programa
```

Ejemplo:

```bash
g++ autobus.cpp -o autobus
```

---

# ▶️ Cómo ejecutar

```bash
./programa
```

Ejemplo:

```bash
./autobus
```

---

# 🧠 Conceptos aplicados

En estos programas se practican:

* Programación estructurada
* Programación orientada a objetos (POO)
* Funciones
* Clases y objetos
* Control de flujo
* Validación de datos
* Simulación de juegos

---

# 👨‍💻 Autor

Luis Fernando Llanos Mamani
Estudiante de **Ingeniería en Sistemas**
