# Reverse Prime Search Algorithm

This project implements a numerical search algorithm in C designed to find the **$k$-th largest prime number** smaller than a given integer $N$. Specifically, it is configured to identify the 3rd largest prime in the sequence.

## 🧮 Algorithm Logic

Unlike standard prime sieves that count upwards (0 to $N$), this algorithm employs a **Reverse Iteration Strategy** to optimize finding largest values first.

### Step-by-Step Process:
1.  **Input:** Takes an integer Upper Bound ($N$).
2.  **Reverse Loop:** Iterates $i$ from $N-1$ down to $2$.
3.  **Primality Test:** Checks if $i$ is prime using trial division ($O(\sqrt{i})$).
4.  **Counter:** Increments a `found_count` for every valid prime.
5.  **Termination:** Breaks the loop immediately when `found_count == 3` and returns $i$.

### Example Execution
**Input:** $N = 12$
* Check 11: Prime? ✅ (Count = 1)
* Check 10: Prime? ❌
* Check 9:  Prime? ❌
* Check 8:  Prime? ❌
* Check 7:  Prime? ✅ (Count = 2)
* Check 6:  Prime? ❌
* Check 5:  Prime? ✅ (Count = 3) -> **STOP & PRINT 5**

## 🚀 Usage

1.  Compile the source code:
    ```bash
    gcc main.c -o prime_search
    ```
2.  Run the executable:
    ```bash
    ./prime_search
    ```
3.  Enter a number (e.g., `12`) to find the 3rd largest prime below it.

---
*This repository demonstrates reverse loop structures and search optimization in C.*
