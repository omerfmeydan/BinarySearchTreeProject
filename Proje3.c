Proje 3
[7, 5, 1, 8, 3, 6, 0, 9, 4, 2] dizisinin Binary-Search-Tree a�amalar�n� yaz�n�z.

�rnek: root x'dir. root'un sa��ndan y bulunur. Solunda z bulunur vb.


Root olarak 6 say�s�n� se�elim. 6 say�s�n�n sa��nda 7,8,9 solunda ise 5,1,3,0,4,2 bulunur.
7,8,9 dizisine bakt���m�zda root 8 olur ve sa��nda 9 solunda ise 7 say�lar� bulunur.
5,1,3,0,4,2 dizisine bakt���m�zda root olarak 3'� se�elim. Sa��nda 5,4 say�lar� solunda ise 1,0,2 say�lar� bulunur.
5,4 dizisinde root olarak 4 se�ilir. Sadece sa��nda 5 bulunur. 1,0,2 dizisinde ise rrot olarak 1 se�ilir ve sa��nda 2 solunda 0 say�s� bulunur.
  
  
  
                                                6
                                               / \
                                             8    3
                                            /      \
                                        7   9  1 0 2 5 4
                                                /      \
											   1        4
											  /         /
											0	2     -  5

