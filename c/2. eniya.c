/*
Question:
    It’s restless now on the slips of the intergalactic port’s sixth dock of planet of Torn. No longer then in a month the reconstruction of the small ironclad corvette “Eniya” will be finished. And again this battle ship and its brave team would have to struggle for the control over plutonium mines of Sibelius. The work cannot be stopped even for a second, self-powered laser welders work round the clock. Joints of robots-repairers fuse because of this permanent work. Nevertheless, they can’t stop not for a single moment.
    Now in all this turmoil it is discovered that corvette’s thermopanels again need an urgent processing with thorium sulphide. It is known that the processing of the one square meter of the panel needs 1 nanogramm of sulphide. In general, it is needed to process N rectangular panels, which dimensions are A by B meters. It is necessary to calculate as fast as possible, how much sulphide is needed in general for the processing of all panels of “Eniya”. Moreover, do not forget, that the panels need processing of both sides.

Input condition:
    The only line contains integers N (1 ≤ N ≤ 100), A (1 ≤ A ≤ 100), B (1 ≤ B ≤ 100).

Output condition:
    Output the weight of thorium sulphide in nanogramms needed for the processing.

Input: 5 2 3
Output: 60

*/

#include<stdio.h>

int main(){
    int n, a, b;

    scanf("%d %d %d", &n, &a, &b);
    printf("%d", 2*(n*a*b));

    return 0;
}
