# llvm-passes

Put your test source in `src.c`

Generate passes (roughly 44): `make` or `make build`

Delete temp stuff `make clean`

## Notes

MIR Spec [here](https://llvm.org/docs/MIRLangRef.html#mir-registers)

`*** IR Dump Before Finalize ISel and expand pseudo-instructions ***`

pre return, add copy of return value to rax

pre call, add copy of arguments to correct registers

post call, add copy of return value out of rax


27: Two-Address Instruction Pass
