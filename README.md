# C-basic
This is the begining of C programming
# Low-Level C Programming & Memory Mechanics for Cyber Security

Welcome to your foundational training repository. This repository contains the source code, explanations, and core logic concepts designed to bridge the gap between writing simple C programs and understanding advanced security vulnerabilities.

## 🏛️ Core Philosophy
Before you can learn how to break a machine, you must understand how a machine thinks. C is the language of choice for cybersecurity because it exposes the physical mechanics of computer memory (RAM)—such as the Stack, Heap, Pointers, and Buffer layouts—without abstraction.

---

## 🛠️ Environment Setup (Kali Linux)
All development and code exercises in this training are executed directly inside the Kali Linux terminal using standard GNU tools.

### 1. Install Compiler Infrastructure
```bash
sudo apt update
sudo apt install build-essential -y
```

### 2. Standard Workflow Routine
For every program written in this course, follow this strict compilation and execution path:
```bash
# Open/Create a source file
nano program_name.c

# Compile the source into a machine executable
gcc program_name.c -o executable_name

# Execute the binary locally
./executable_name
```

---

## 📦 Modules & Code Library

### Module 1: The Blueprint (`first.c`)
Understanding the absolute minimum structure of a C file, library loading (`#include <stdio.h>`), the entry point function (`main`), and terminal printing formats.
```c
#include <stdio.h>

int main() {
    printf("Hello World\n");
    return 0;
}
```

### Module 2: Memory Mailboxes (`variables.c`)
An introduction to data types, byte sizes, and memory allocation placeholders (`%d`, `%c`).
```c
#include <stdio.h>

int main() {
    int score = 100;
    char letter = 'X';

    printf("Your score is %d\n", score);
    printf("The target is marked with an %c\n", letter);
    return 0;
}
```

### Module 3: Intercepting Input & Conditional Logic (`decision.c`)
Using the ampersand (`&`) address-of operator with `scanf` to direct user keyboard inputs straight into a target RAM coordinate, followed by validation checks via `if/else` forks.
```c
#include <stdio.h>

int main() {
    int entered_pin;
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &entered_pin);

    if (entered_pin == 1337) {
        printf("[+] ACCESS GRANTED: Welcome back, Administrator.\n");
    } else {
        printf("[-] ACCESS DENIED: Intruder alert!\n");
    }
    return 0;
}
```

### Module 4: State Synchronization and Control Loops (`loop.c` / `count.c`)
Controlling execution flow using conditional loops (`while`) and index iteration counters (`for`). Contains lessons on avoiding unintentional infinite resource exhaustion.
```c
#include <stdio.h>

int main() {
    int entered_pin = 0;
    while (entered_pin != 1337) {
        printf("Enter the correct 4-digit PIN to unlock: ");
        scanf("%d", &entered_pin);
        if (entered_pin != 1337) {
            printf("[-] Wrong PIN! Try again.\n");
        }
    }
    printf("\n[+] SUCCESS: System Unlocked!\n");
    return 0;
}
```

### Module 5: Contiguous Storage & Garbage Memory (`array.c`)
Understanding side-by-side mailbox alignment in RAM, structural default initializations to `0`, and the concept of "uninitialized memory leaking" (reading raw leftover digital ghosts from previous system actions).
```c
#include <stdio.h>

int main() {
    int network_ports[5] = {21, 22, 80, 443, 8080};
    for (int i = 0; i < 5; i++) {
        printf("Index [%d] stores network port: %d\n", i, network_ports[i]);
    }
    return 0;
}
```

### Module 6: Raw Memory Coordinates (`pointers.c`)
Mastering the exact mechanics of system pointers using the extraction operator (`&`) and the pointer redirection mechanism (`*` dereferencing) to modify a target's context from outside its direct variable label scope.
```c
#include <stdio.h>

int main() {
    int critical_data = 1337;
    int *ptr = &critical_data;

    printf("Value: %d | Address: %p\n", critical_data, (void*)ptr);
    *ptr = 9999; // Indirect memory manipulation
    printf("New value: %d\n", critical_data);
    return 0;
}
```

### Module 7: Code Execution Hijacking (`challenge.c`)
Our premier milestone exercise. Demonstrates how to map executable instruction functions straight into variables using **Function Pointers**. Implements Hexadecimal pointer math calculations to dynamically shift execution logic down structural address layers to hit hidden code targets.
```c
#include <stdio.h>

void restricted_access() {
    printf("\n[!!!] FLAG CAPTURED: You have successfully bypassed security! [!!!]\n");
}

void normal_user_portal() {
    printf("\n[+] Welcome to the standard user dashboard.\n");
}

int main() {
    void (*engine_ptr)() = normal_user_portal;
    long secret_offset = 0;

    printf("Location of normal_user_portal: %p\n", (void*)normal_user_portal);
    printf("Location of restricted_access:  %p\n", (void*)restricted_access);

    printf("\nEnter a memory offset adjustment number: ");
    scanf("%ld", &secret_offset);

    engine_ptr = (void (*)())((long)engine_ptr + secret_offset);
    engine_ptr();

    return 0;
}
```

---

## 🛡️ Completed Milestones
* **Memory Architecture Awareness:** Confirmed understanding of memory space allocations, uninitialized variable leakage anomalies, and structural garbage values.
* **Exploit Math Competency:** Achieved exact Base-16 Hexadecimal address offset isolation to calculate precise programmatic jumps.
* **Control Flow Modification:** Successfully re-routed CPU instruction routing via dynamic function pointers to capture administrative flags.
