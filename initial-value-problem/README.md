# initial-value-problem

The program solves initial value problem using the Euler, Heun's and 4th-order Runge–Kutta method.

It also output the solutions as CSV files, which can be displayed in [gnuplot](http://www.gnuplot.info) as follows.

```gnuplot
set datafile separator ","
plot "build/0_0.csv" with linespoint
```
