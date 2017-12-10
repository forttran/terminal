#-----------------------
# EDRTEST.MAK make file
#-----------------------

123.exe : 123.obj wt_de.lib
	link -SUBSYSTEM:windows -OUT:123.exe 123.obj func.obj wt_de.lib -DEFAULTLIB:user32.lib gdi32.lib winmm.lib comdlg32.lib comctl32.lib -NODEFAULTLIB:LIBC.lib 

123.obj : 123.cpp wt_de.h
     cl -c -DSTRICT -MT -G3 -Ow -W3 -Zp -Tp 123.cpp

func.obj : func.cpp
	 	 cl -c -DSTRICT -G3 -Ow -W3 -Zp -Tp func.cpp


