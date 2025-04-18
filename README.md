# 🔧 Pipex - 42 School

**Pipex** is a 42 School project that replicates the UNIX shell's pipe functionality by executing chained commands with input/output redirection. It’s designed to help students understand system-level programming, especially inter-process communication, process creation, and file descriptors. 🛠️

## 📋 Features

- 🔁 **Command piping**: Executes multiple commands connected by pipes (`|`), just like a UNIX shell.
- 📂 **Input/Output redirection**: Supports reading from a file and writing the final output to another.
- 👥 **Process management**: Uses `fork`, `execve`, `pipe`, and `waitpid` to handle multiple processes.
- 🧠 **Memory and resource handling**: Careful management of memory, file descriptors, and error cases.
- ✅ Fully compliant with **42 Norminette** and compatible with **Francinette**.

## 🛠️ Installation

### Prerequisites

Make sure you have the following installed:

- 🖥️ A **Unix-like OS** (Linux, macOS)
- 🔧 **GCC** compiler

### Installation Steps

1. **Clone the repository**:
    ```bash
    git clone https://github.com/yourusername/pipex.git
    cd pipex
    ```

2. **Compile the project** using `make`:
    ```bash
    make
    ```

    This will generate the `pipex` executable.

## 🚀 Usage

```bash
./pipex infile "cmd1" "cmd2" outfile
