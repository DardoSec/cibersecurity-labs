# Side Channel Timing Attack – Educational Lab

This repository contains a small educational lab that demonstrates a **timing side-channel attack** against password verification.

The goal is to show how an apparently correct and functional system can leak sensitive information **solely through execution time**, without ever revealing the secret.

---

## Description

The program compares a user-entered password against a secret value character by character, introducing a small artificial delay for each correct character.

This behavior generates a measurable difference in execution time, allowing an attacker to **progressively infer the entire password** by measuring timings.

The secret is never displayed on screen, simulating a system that properly protects sensitive information, leaving the **timing side-channel** as the only attack vector.

---

## Theoretical Background

**Side-channel attacks** do not directly target the algorithm itself, but rather **the indirect information leaks** that occur during its execution, such as:

- Execution time  
- Power consumption  
- Memory usage  
- Electromagnetic emissions  

In this lab, the **timing channel** is specifically exploited, showing why secret comparisons must be implemented in **constant time** to prevent information leakage.

This type of vulnerability has historically affected cryptographic libraries, web APIs, token validators, embedded systems, and secure hardware.

---

## Compilation (Windows)

Example using `g++`:

```bash
g++ side_channel.cpp -O0 -o side_channel.exe
```

---

## Syntax

```bash
side_channel.exe <real_password> <milliseconds_per_character>
```

---

## Example Execution

```bash
side_channel.exe secreto123 80
```

> It is recommended to start with a short secret first.

```bash
side_channel.exe 3547 80
```

---

## Example

By observing the time the system takes to compare passwords, it is possible to determine whether a new correct character has been found.

```
Attempt: aaaaaaaa  → 0.02 s
Attempt: saaaaaaa  → 0.07 s
Attempt: seaaaaaa  → 0.12 s
Attempt: secaaaaa  → 0.17 s
```

This allows progressively inferring the secret value, one character at a time.

---

## Recommendations

- For initial demonstrations, use values between **30 and 80 ms**.
- For a more realistic scenario, use values between **1 and 5 ms**, which requires multiple measurements and statistical averaging.
- Repeat each measurement several times to reduce timing noise.

---

## Educational Purpose

This lab is designed for **strictly educational purposes**, to:

- Understand side-channel attacks.
- Analyze timing vulnerabilities.
- Learn secure programming best practices.
- Illustrate the importance of constant-time comparisons.
- Introduce basic concepts of statistical analysis applied to security.

It is ideal for introductory courses in:

- Cybersecurity.
- Computer security.
- Secure programming.

---

## Ethical Warning

This project is provided for educational purposes only.

It must not be used to attack real systems or to violate the privacy, integrity, or security of others.  
The author is not responsible for the misuse of this material.
