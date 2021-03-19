x,y,z = gets.split.map &:to_i

temp = x
x = y
y = temp

temp = x
x = z
z = temp

puts "#{x} #{y} #{z}"
