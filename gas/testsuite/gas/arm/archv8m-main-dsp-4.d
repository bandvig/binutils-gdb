#name: ARMv8-M Mainline with DSP instructions (Security Extensions 3)
#source: archv8m-cmse-msr.s
#as: -march=armv8-m.main+dsp
#objdump: -dr --prefix-addresses --show-raw-insn

.*: +file format .*arm.*

Disassembly of section .text:
0+.* <[^>]*> f380 8808 	msr	MSP, r0
0+.* <[^>]*> f380 8888 	msr	MSP_NS, r0
0+.* <[^>]*> f380 8809 	msr	PSP, r0
0+.* <[^>]*> f380 8889 	msr	PSP_NS, r0
0+.* <[^>]*> f380 8808 	msr	MSP, r0
0+.* <[^>]*> f380 8888 	msr	MSP_NS, r0
0+.* <[^>]*> f380 8809 	msr	PSP, r0
0+.* <[^>]*> f380 8889 	msr	PSP_NS, r0
0+.* <[^>]*> f3ef 8008 	mrs	r0, MSP
0+.* <[^>]*> f3ef 8088 	mrs	r0, MSP_NS
0+.* <[^>]*> f3ef 8009 	mrs	r0, PSP
0+.* <[^>]*> f3ef 8089 	mrs	r0, PSP_NS
0+.* <[^>]*> f3ef 8008 	mrs	r0, MSP
0+.* <[^>]*> f3ef 8088 	mrs	r0, MSP_NS
0+.* <[^>]*> f3ef 8009 	mrs	r0, PSP
0+.* <[^>]*> f3ef 8089 	mrs	r0, PSP_NS
