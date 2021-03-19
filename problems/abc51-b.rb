k,s = gets.split.map &:to_i
count = 0

for x in 0..k do
    for y in 0..k do
        z = s - (x + y)
        if z >= 0 && z <= k && x + y + z == s
            count += 1
        end
    end
end

puts count
