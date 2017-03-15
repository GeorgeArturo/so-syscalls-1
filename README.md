# so-syscalls
El kernel de Linux mantiene una variable global denominada jiffies, que representa la cantidad de tics de cronómetro transcurridos desde el arranque de la máquina. Esta variable se inicia en cero y aumenta con cada interrupción del cronómetro. Se pueden leer los jiffies con la función get_jiffies_64, y luego se puede convertir este valor a milésimas de Segundo (msec) con jiffies_to_msecs o a microsegundos (usec) con jiffies_to_usecs. Las funciones globales y asociadas de los jiffies se ofrecen en ./linux/include/linux/jiffies.h.

Bibliografia:
http://www.ibm.com/developerworks/ssa/linux/library/l-system-calls/
