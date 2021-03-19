n,y = gets.split.map &:to_i

is_break = false

for i in 0..n do
    i_mul = 10000 * i
    for j in 0..n - i do
        j_mul = 5000 * j
        for k in 0..n - i - j do
            if (i_mul + j_mul + 1000 * k == y) && (i + j + k == n)
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
