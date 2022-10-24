Proje 3
[7, 5, 1, 8, 3, 6, 0, 9, 4, 2] dizisinin Binary-Search-Tree aþamalarýný yazýnýz.

Örnek: root x'dir. root'un saðýndan y bulunur. Solunda z bulunur vb.


Root olarak 6 sayýsýný seçelim. 6 sayýsýnýn saðýnda 7,8,9 solunda ise 5,1,3,0,4,2 bulunur.
7,8,9 dizisine baktýðýmýzda root 8 olur ve saðýnda 9 solunda ise 7 sayýlarý bulunur.
5,1,3,0,4,2 dizisine baktýðýmýzda root olarak 3'ü seçelim. Saðýnda 5,4 sayýlarý solunda ise 1,0,2 sayýlarý bulunur.
5,4 dizisinde root olarak 4 seçilir. Sadece saðýnda 5 bulunur. 1,0,2 dizisinde ise rrot olarak 1 seçilir ve saðýnda 2 solunda 0 sayýsý bulunur.
  
  
  
                                                6
                                               / \
                                             8    3
                                            /      \
                                        7   9  1 0 2 5 4
                                                /      \
											   1        4
											  /         /
											0	2     -  5

