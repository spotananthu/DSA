1class Solution {
2public:
3    string intToRoman(int num) {
4
5        string thousands[] = {"","M","MM","MMM"};
6        string hundreds[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
7        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
8        string units[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
9
10        return thousands[num/1000]+
11               hundreds[(num%1000)/100]+
12               tens[(num%100)/10]+
13               units[(num%10)];
14        
15    }
16};