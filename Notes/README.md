1. Adjacency list is more used because most graph we're given are sparse. For non sparse graphs sometimes adjacency matrix is more convenient.

2. adj matrix is better if you need to check if two nodes are conected, adjacency list is better if you need to add some more nodes.

### Sparse graph: 

### Dense graph:

<b>Link to study:</b> https://codeforces.com/blog/entry/94431


## DFS 
### Why we need visited array or why it is important to track visited nodes
Similar to track, a graph can be traversed depth wise, but unlike tree, reaching to any node from a source node is not similar to graph. As we know, graph could have multiple cycles, also there are no particular limit how many nodes or edges can be connect to a graph. Hereby, we have multiple paths that can be traversed. If we don't track the visited node then there could be possibilities a node appear multpile times, and end up with inifinite circulation.

### <u>**When to use dfs graph in tree**</u>:

1. In a tree question if it asked to find the height of each node

2. In a tree question if it asked to find the depth of each node

### if we have to find cyclce in a multi-component graph, then we have to loop through every node and check for cycle

&nbsp;
## Mathematical algorithm
### Extended euclidean algorithm 

Why do we need extended euclidean algorithm: 
1. To find co-effecient value of a and b in **ax + by** equation if a and b are given. 


ax + by = gcd(a, b) .... (i)

We know, GCD = gcd(a, b) = gcd(b, a % b)  
Or, GCD = gcd (a, b) = gcd(b % a, a)

So, a = b and b = a % b

Applications:
1. 

> ## **Chinese Remainder Theorem**
Here, **x** is the actual number, **cp** suggests co-prime(it is the mod value); **rem** suggests remainder we got from (x / cp);  

Co-prime: are such set of numbers which gcd is 1.

### ```x ≅ rem1 (mod cp1)```

So, we've total 3 variables, if you're given any of the two values determining remaining value is possible through chinese remainder theorem.

### Generating possible values
On the next step, we will assume and generate possible values of 'x', starting from the given remainder value and every next values to be co-prime or mod value interval.  

### Find unique value 
From the generated possible values of 'x' all pair-wise coprimes, there must an unique solution which is present among all possible values. The only constraint for that unique value: unique value < [cp1 x cp2 x .... x cpn]
The unique value must lesser than the multiplication of all the co-primes. 


## Substring 
number of substring in a string: n *(n + 1)/ 2