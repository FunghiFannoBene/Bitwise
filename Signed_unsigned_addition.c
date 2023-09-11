Step 1: Prepare the Numbers
yaml
Copy code
   1111 1001  (-7 in decimal, in two's complement representation)
 + 0000 0111  (7 in decimal)
Save to grepper
Step 2: Perform Bitwise Addition
From right to left, we add each corresponding pair of bits (along with any carry from the previous pair):

1
+
1
=
10
1+1=10 (in binary), so we write down 0 and carry over 1.
0
+
1
+
1
=
10
0+1+1=10 (in binary), so we write down 0 and carry over 1.
0
+
1
+
1
=
10
0+1+1=10 (in binary), so we write down 0 and carry over 1.
1
+
0
+
1
=
10
1+0+1=10 (in binary), so we write down 0 and carry over 1.
1
+
0
+
1
=
10
1+0+1=10 (in binary), so we write down 0 and carry over 1.
1
+
0
+
1
=
10
1+0+1=10 (in binary), so we write down 0 and carry over 1.
1
+
0
+
1
=
10
1+0+1=10 (in binary), so we write down 0 and carry over 1.
1
+
0
+
1
=
10
1+0+1=10 (in binary), so we write down 0 and carry over 1.
Now the sum is 10000 0000. However, because we are working with 8-bit numbers, the leftmost carry "overflows" and is discarded, giving the result 0000 0000.

So, as you can see, 
11111001
+
00000111
=
00000000
11111001+00000111=00000000. The operation is consistent with 
−
7
+
7
=
0
−7+7=0, confirming the correctness of the two's complement representation and the addition operation.
