# GUIA DE LABORATORIO — file_processor

## Simulador Educativo de Procesamiento de Archivos en C

---

# 1. OBJETIVO DEL LABORATORIO

El objetivo de este laboratorio es observar cómo funciona un programa en C que:

- Recorre directorios de forma recursiva
- Enumera archivos del sistema
- Procesa archivos según distintos modos
- Registra información mediante logs
- Simula operaciones de transformación de datos

Este proyecto **NO** realiza acciones destructivas en modo educativo.

---

# 2. CONCEPTOS QUE SE TRABAJAN

Durante esta práctica se aprenderán los siguientes conceptos:

- Argumentos en línea de comandos (CLI)
- Recursividad en exploración de directorios
- PoC ransomware con encriptación débil XOR

---

# 3. MODOS DEL PROGRAMA

## LIST

Solo enumera archivos sin procesarlos.

## DRY-RUN

Simula el procesamiento sin modificar archivos.

## SIMULATE

Simula renombrado de archivos.

## XOR

Aplica una transformación XOR educativa sobre el contenido.

---

# 4. EJECUCIÓN DEL PROGRAMA

## 4.1 Ejecución básica

```bash
file_processor.exe --path ./lab
```

---

## 4.2 Activar modo verbose (debug)

```bash
file_processor.exe --path ./lab --verbose
```

---

## 4.3 Modo LIST

```bash
file_processor.exe --path ./lab --mode list
```

---

## 4.4 Modo SIMULATE

```bash
file_processor.exe --path ./lab --mode simulate
```

---

## 4.5 Modo XOR (educativo)

```bash
file_processor.exe --path ./lab --mode xor --key SECRET
```

---

## 4.6 Limitar cantidad de archivos

```bash
file_processor.exe --path ./lab --max-files 5
```

---

## 4.7 Ejecución combinada

```bash
file_processor.exe --path ./lab --mode xor --key EDU_KEY --verbose --max-files 10
```

---

# 5. RESULTADO ESPERADO

Durante la ejecución verás:

- Mensajes INFO indicando progreso general
- Mensajes DEBUG si se activa verbose
- Enumeración de archivos encontrados
- Procesamiento secuencial de cada archivo
- Resumen final con cantidad de archivos procesados

Ejemplo:

```text
[INFO] SAFE EDUCATIONAL BUILD
[INFO] Execution mode: dry-run
[INFO] Starting file enumeration
[DEBUG] Discovered file: ./lab/docs/file.txt
[INFO] Total files found: 7
[INFO] Processing file: ./lab/docs/file.txt
[INFO] Dry-run mode: no changes applied
[INFO] Finished
```

---

# 6. ACTIVIDADES PARA ESTUDIANTES

## Actividad 1

Ejecutar el programa en modo list y observar qué archivos se detectan.

---

## Actividad 2

Ejecutar con verbose activado y analizar el flujo de recursividad.

---

## Actividad 3

Cambiar el valor de `max-files` y observar cómo afecta la ejecución.

---

## Actividad 4

Ejecutar modo simulate y explicar qué diferencia tiene con dry-run.

---

## Actividad 5

Analizar el comportamiento del modo xor (conceptualmente, sin modificar archivos reales).

---

## Actividad 6 (reflexión)

Responder:

- ¿Por qué es útil separar modos de ejecución?
- ¿Qué ventajas tiene el logging estructurado?
- ¿Qué problemas evita el modo dry-run?

---

# 7. PREGUNTAS DE PROFUNDIZACIÓN

1. ¿Qué ventajas tiene usar recursividad en la exploración de directorios?

2. ¿Qué pasaría si el programa no tuviera límite de `max-files`?

3. ¿Por qué es importante el logging en herramientas de sistema?

4. ¿Qué diferencia hay entre simular y ejecutar realmente una operación?

---

# 8. NOTAS IMPORTANTES

- Este proyecto es estrictamente educativo
- No realizar pruebas fuera de entornos controlados
- Solo procesa archivos de texto (`.txt`)
- Diseñado para sistemas Windows

---

# ADVERTENCIA ÉTICA

Este proyecto se proporciona únicamente con fines educativos.

No debe utilizarse para atacar sistemas reales ni para vulnerar la privacidad, integridad o seguridad de terceros.

El autor no se responsabiliza por el uso indebido de este material.
