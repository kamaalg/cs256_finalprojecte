import re

f = open("./pirates.ino", "r")

file_contents = f.read();


delay_pattern = r'delay\((\d+)\)'
note_pattern =  r'tone\(buzzerPin,\s*(\d+)\)'
# Find all numerical values using regular expression
delay_values = re.findall(delay_pattern, file_contents)
note_values = re.findall(note_pattern, file_contents)
note_values = [int(element) for element in note_values]
delay_values = [int(element) for element in delay_values]

print("Notes:")
print(note_values)
print("--------")
print("Delays:")
print(delay_values)