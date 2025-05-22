# open-rkllm
An effort to open-source rkllm &amp; rknpu firmware

## Strategies to Un-Compile `librkllmrt.so`

Results of these strategies are in the `analyze` directory.

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

> Note: Reverse engineering may be restricted by software licenses or laws. Always ensure you have the right to analyze the binary.

# De-compile
