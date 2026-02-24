# Side Channel Timing Attack – Educational Lab

Este repositorio contiene un pequeño laboratorio educativo que demuestra un **ataque por canal lateral de tiempo (timing side-channel attack)** sobre la verificación de un password.

El objetivo es mostrar cómo un sistema aparentemente correcto y funcional puede filtrar información sensible **únicamente a través del tiempo de ejecución**, sin mostrar nunca el secreto.

---

## Descripción

El programa compara un password ingresado por el usuario contra un valor secreto carácter por carácter, introduciendo un pequeño retardo artificial por cada carácter correcto.

Este comportamiento genera una diferencia medible en el tiempo de ejecución, lo que permite a un atacante **inferir progresivamente el password completo** midiendo tiempos.

El secreto nunca se muestra en pantalla, simulando un sistema que protege correctamente la información, dejando como única vía de ataque el **canal lateral temporal**.

---

## Fundamento teórico

Los **ataques por canal lateral (side-channel attacks)** no atacan directamente el algoritmo, sino **las fugas indirectas de información** que se producen durante su ejecución, tales como:

- Tiempo de ejecución.
- Consumo eléctrico.
- Uso de memoria.
- Emisiones electromagnéticas.

En este laboratorio se explota específicamente el **canal temporal**, mostrando por qué las comparaciones de secretos deben implementarse en **tiempo constante** para evitar filtraciones.

Este tipo de vulnerabilidad ha afectado históricamente a bibliotecas criptográficas, APIs web, validadores de tokens, sistemas embebidos y hardware seguro.

---

## Compilación (Windows)

Ejemplo usando `g++`:

```bash
g++ side_channel.cpp -O0 -o side_channel.exe

## Sintaxis

side_channel.exe <password_real> <milisegundos_por_caracter>

## Ejemplo de ejecución

side_channel.exe secreto123 80

# Se sugiere comenzar con un secreto corto primero.

side_channel.exe 3547 80

## Ejemplo

Observando el tiempo que el sistema tarda en comparar las contraseñas se deduce si se encontró un nuevo carácter correcto.

Intento: aaaaaaaa  → 0.02 s  
Intento: saaaaaaa  → 0.07 s  
Intento: seaaaaaa  → 0.12 s  
Intento: secaaaaa  → 0.17 s  

Esto permite inferir progresivamente el valor del secreto, un carácter a la vez.

## Recomendaciones

- Para demostraciones iniciales, usar valores entre **30 y 80 ms**.
- Para un escenario más realista, usar valores entre **1 y 5 ms**, lo que requiere múltiples mediciones y promedios estadísticos.
- Repetir cada medición varias veces para reducir el ruido temporal.

---

## Objetivo educativo

Este laboratorio está diseñado con fines **estrictamente educativos**, para:

- Comprender ataques por canal lateral.  
- Analizar vulnerabilidades temporales.  
- Aprender buenas prácticas de programación segura.  
- Ilustrar la importancia de las comparaciones en tiempo constante.  
- Introducir conceptos básicos de análisis estadístico aplicado a seguridad.  

Es ideal para cursos introductorios de:

- Ciberseguridad.  
- Seguridad informática.  
- Programación segura.  

---

## Advertencia ética

Este proyecto se proporciona únicamente con fines educativos.

No debe utilizarse para atacar sistemas reales ni para vulnerar la privacidad, integridad o seguridad de terceros.  
El autor no se responsabiliza por el uso indebido de este material.
