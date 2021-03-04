# Dispatch
Algorithms and Data Structures Work - Dispatch of products with maximum value or weight - Greedy Algorithm

## The problem

You work in a department store, and ship a lot of products. These products have price (value) and weight.
One carrier is limited by the value V and the other by the weight W.

The algorithm separates the products by box in order to minimize the shipping price. Each box costs $10.

Example given:

We have 8 products listed below.

|  Item  | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |
| ------ |:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| Value  | 2 | 1 | 1 | 2 | 4 | 3 | 1 | 2 |
| Weight | 3 | 1 | 2 | 2 | 2 | 2 | 2 | 1 |

Carrier 1 has values limited to 5 and the other has weights limited to 5

Output
```shell
----------------
Amount of box by value: 1
****************
ID Box: 1
****************
ID: 1 ;Value: 2 ;Weight: 3
ID: 3 ;Value: 1 ;Weight: 2
ID: 7 ;Value: 1 ;Weight: 2
----------------
Amount of box by weight: 2
****************
ID Box: 2
****************
ID: 2 ;Value: 1 ;Weight: 1
ID: 4 ;Value: 2 ;Weight: 2
ID: 5 ;Value: 4 ;Weight: 2
****************
ID Box: 3
****************
ID: 6 ;Value: 3 ;Weight: 2
ID: 8 ;Value: 2 ;Weight: 1
```
The first box has a value limited to 5 and its value is 4, the second and third by weight, 5 and 3 respectively.
This is a good solution, The cost was $30.
The Greedy Algorithm search for a good solution, regularly the best solution, but that's ok, because a good solution is better than a bad solution or none at all.
