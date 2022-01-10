import json
from tkinter import filedialog
filenames = filedialog.askdirectory()

obj = open('filepath.txt', 'w')
obj.write(filenames)
obj.close()
