n,y = gets.split.map &:to_i

is_break = false

for i in 0..n do
    for j in 0..n do
        for k in 0..n do
            if (10000 * i + 5000 * j + 1000 * k == y) && (i + j + k == n)
                is_break = true
                print("#{i} #{j} #{k}\n")
                break
            end
        end
        break if is_break == true
    end
    break if is_break == true
end

if is_break == false
    print("#{-1} #{-1} #{-1}")
end
