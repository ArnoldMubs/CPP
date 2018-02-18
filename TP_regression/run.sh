#!/bin/sh


# plot raw data 

gnuplot -e "set out 'data.png'; \
    set terminal png size 800,600; \
    set grid xtics ytics; \
    plot 'data_yoan.csv' title 'donnees' pt 5 "

display data.png


# # compute and plot fitting 
# 
# ./regression.out data_yoan.csv 1 50 > fit1.csv
# ./regression.out data_yoan.csv 2 50 > fit2.csv
# 
# gnuplot -e "set out 'fit.png'; \
#     set terminal png size 800,600; \
#     set grid xtics ytics; \
#     plot 'data_yoan.csv' title 'donnees' pt 5, \
#          'fit1.csv' title 'lineaire' with line lw 2, \
#          'fit2.csv' title 'quadratique' with line lw 2 "
# 
# display fit.png

