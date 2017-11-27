# Accounting
## Reads text files and sorts through data
Inspiration for this came through my parents (small business owners) talking about how useful it would be to have a program that basically does the accounting for them. So that's what this program aims to do. It looks at a text file with all the expenses in it and sorts them into new text files it creates. It also totals expenses of the same kind.

## Example
```
Sale,11/13/2017,11/14/2017,AMAZON MKTPLACE PMTS,-22.26 >> Electronics,-22.26,2017,11
Sale,11/11/2017,11/12/2017,T J MAXX #1417,-26.47       >> Electronics,-15.90,2017,11
Sale,10/30/2017,10/31/2017,Audible,-15.85              >> Clothes,-26.47,2017,11
Sale,11/08/2017,11/09/2017,Amazon.com,-15.90           >> Books,-15.85,2017,10
```

## Test Run
Make sure you save the text file you want to organize in the same folder you store the code. If the code is on your desktop, the file should be as well.

The following is a complete example of how the code works.
```
                                                                Category,Amount,Year,Month
Sale,11/13/2017,11/14/2017,AMAZON MKTPLACE PMTS,-22.26 >>       Electronics,-22.26,2017,11
Sale,11/13/2017,11/14/2017,Amazon.com,-22.28           >>       Electronics,-22.28,2017,11
Sale,11/12/2017,11/13/2017,Amazon.com,-15.90           >>       Electronics,-15.90,2017,11
Sale,11/11/2017,11/12/2017,T J MAXX #1417,-26.47       >>       Electronics,-12.67,2017,11
Sale,11/11/2017,11/12/2017,AMAZON MKTPLACE PMTS,-12.67 >>       Electronics,-11.99,2017,11
Sale,11/09/2017,11/10/2017,TINKS SUPERIOR AUTOPARTS,-12.19 >    Electronics,-15.90,2017,11
Sale,11/09/2017,11/10/2017,AMAZON MKTPLACE PMTS,-11.99 >>       Electronics,-6.05,2017,10
Sale,11/08/2017,11/09/2017,Amazon.com,-15.90           >>       Electronics,-26.79,2017,10
Sale,11/08/2017,11/09/2017,WAL-MART #1438,-33.58       >>       Clothes,-26.47,2017,11
Sale,11/08/2017,11/10/2017,TROPICAL SMOOTHIE UT02,-19.24>       Car,-12.19,2017,11
Sale,11/06/2017,11/07/2017,PHILLIPS 66 - KB EXPRESS,-25.00>     Car,-25.00,2017,11
Payment,11/03/2017,11/03/2017,AUTOMATIC PAYMENT - THANK,870.23> Car,-1000.00,2017,10
Sale,10/31/2017,11/01/2017,AMAZON MKTPLACE PMTS,-6.05  >>       Food,-33.58,2017,11
Sale,10/30/2017,10/31/2017,CEDAR CITY MOTOR COMPANY,-1000.00>   Food,-19.24,2017,11
Sale,10/30/2017,10/31/2017,AMAZON MKTPLACE PMTS,-26.79 >>       Food,-26.50,2017,10
Sale,10/30/2017,10/31/2017,Audible,-15.85              >>       Food,-31.42,2017,10
Sale,10/27/2017,10/29/2017,SMITHS FOOD #4042,-26.50    >>       Books,-15.85,2017,10
Sale,10/27/2017,10/29/2017,SMITHS FOOD #4042,-31.42    >>       Payment,870.23,2017,11
```
