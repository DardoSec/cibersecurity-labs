# LABORATORY GUIDE — file_processor

## Educational File Processing Simulator in C

---

# 1. LABORATORY OBJECTIVE

The objective of this laboratory is to observe how a C program works that:

- Recursively traverses directories
- Enumerates system files
- Processes files using different modes
- Logs information during execution
- Simulates data transformation operations

This project does **NOT** perform destructive actions in educational mode.

---

# 2. CONCEPTS COVERED

During this practice, the following concepts will be explored:

- Command-line arguments (CLI)
- Recursive directory traversal
- Ransomware PoC using weak XOR encryption

---

# 3. PROGRAM MODES

## LIST

Only enumerates files without processing them.

## DRY-RUN

Simulates processing without modifying files.

## SIMULATE

Simulates file renaming operations.

## XOR

Applies an educational XOR transformation to file contents.

---

# 4. PROGRAM EXECUTION

## 4.1 Basic execution

```bash
file_processor.exe --path ./lab
```

---

## 4.2 Enable verbose mode (debug)

```bash
file_processor.exe --path ./lab --verbose
```

---

## 4.3 LIST mode

```bash
file_processor.exe --path ./lab --mode list
```

---

## 4.4 SIMULATE mode

```bash
file_processor.exe --path ./lab --mode simulate
```

---

## 4.5 XOR mode (educational)

```bash
file_processor.exe --path ./lab --mode xor --key SECRET
```

---

## 4.6 Limit number of files

```bash
file_processor.exe --path ./lab --max-files 5
```

---

## 4.7 Combined execution

```bash
file_processor.exe --path ./lab --mode xor --key EDU_KEY --verbose --max-files 10
```

---

# 5. EXPECTED OUTPUT

During execution you will observe:

- INFO messages indicating general progress
- DEBUG messages when verbose mode is enabled
- Enumeration of discovered files
- Sequential processing of each file
- Final summary showing processed file count

Example:

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

# 6. STUDENT ACTIVITIES

## Activity 1

Run the program in list mode and observe which files are detected.

---

## Activity 2

Run the program with verbose mode enabled and analyze the recursion flow.

---

## Activity 3

Modify the `max-files` value and observe how it affects execution.

---

## Activity 4

Run simulate mode and explain the difference compared to dry-run mode.

---

## Activity 5

Analyze the behavior of xor mode conceptually without modifying real files.

---

## Activity 6 (reflection)

Answer the following questions:

- Why is it useful to separate execution modes?
- What advantages does structured logging provide?
- What problems does dry-run mode help prevent?

---

# 7. DEEPER DISCUSSION QUESTIONS

1. What advantages does recursion provide in directory traversal?

2. What could happen if the program had no `max-files` limit?

3. Why is logging important in system tools?

4. What is the difference between simulating and actually executing an operation?

---

# 8. IMPORTANT NOTES

- This project is strictly educational
- Do not perform tests outside controlled environments
- Only processes text files (`.txt`)
- Designed for Windows systems

---

# ETHICAL WARNING

This project is provided strictly for educational purposes.

It must not be used to attack real systems or compromise the privacy, integrity, or security of third parties.

The author assumes no responsibility for misuse of this material.