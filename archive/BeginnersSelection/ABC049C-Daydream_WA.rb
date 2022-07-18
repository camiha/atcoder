s = gets.chomp.to_s
s_rev = s.reverse
t = ""

index = 0
flag = true

while (s != t)

    if s_rev.slice(index,index + 5) == "erase".reverse
        index += 5
        t.insert(0, "erase")
    
    elsif s_rev.slice(index,index + 5) == "dream".reverse
        index += 5
        t.insert(0, "dream")

    elsif s_rev.slice(index,index + 6) == "eraser".reverse
        index += 6
        t.insert(0, "eraser")

    elsif s_rev.slice(index,index + 6) == "dreamer".reverse
        index += 6
        t.insert(0, "dreamer")
    else
        flag = false
        break
    end
end

if flag == true
    puts "YES"
else
    puts "NO"
end
