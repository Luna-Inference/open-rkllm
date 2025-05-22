# open-rkllm
An effort to open-source rkllm &amp; rknpu firmware

# Analysis

All analysis is done in the `analyze` directory.

## Strategies to Un-Compile `librkllmrt.so`

If you want to analyze or reverse-engineer the compiled shared object file `librkllmrt.so`, here are some approaches you can try:

1. **Use the `strings` Utility**  
   Extract printable strings from the binary, which may reveal function names, error messages, or other clues:
   ```
   strings librkllmrt.so
   ```

2. **Disassemble with `objdump`**  
   Disassemble the binary to view its assembly code:
   ```
   objdump -d librkllmrt.so
   ```

3. **Inspect Symbols with `nm` or `readelf`**  
   List exported symbols and functions:
   ```
   nm -D librkllmrt.so
   readelf -s librkllmrt.so
   ```

4. **Use a Decompiler (e.g., Ghidra, IDA Pro, or RetDec)**  
   Tools like Ghidra, IDA Pro, or the open-source RetDec can attempt to reconstruct C-like source code from the binary.

5. **Analyze with `gdb`**  
   Use the GNU Debugger to trace execution and set breakpoints.

6. **Check for Debug Information**  
   If the binary was compiled with debug symbols, more information may be available.

7. **Look for Open Source or Documentation**  
   Sometimes, the original source or partial documentation is available online.

> Note: Reverse engineering may be restricted by software licenses or laws. Always ensure you have the right to analyze the binary.

# De-compile
