import matplotlib.pyplot as plt
import csv
import sys, getopt

x = []
y = []

data_file = ''

opts, args = getopt.getopt(sys.argv[1:], 'd:',['data-file='])
if opts == []:
    print("enter a data file name")
    print("csv_plotter.py -d <data file>")
    sys.exit(2)

for opt, arg in opts:
    if opt in ("-d", "--data-file"):
        data_file = arg

with open(data_file, 'r') as csvfile:
    data_rows = csv.reader(csvfile, delimiter=',')
    for row in data_rows:
        x.append(float(row[0]))
        y.append(float(row[-1]))

plt.scatter(x,y, label="loaded from file")
plt.show()

