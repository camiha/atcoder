k = gets.to_i
a,b = gets.split.map &:to_i
i = 0

loop do
    k_mul = k * i

    if a <= k_mul && k_mul <= b
        puts "OK"
        break
    elsif b < k_mul
        puts "NG"
        break
    end
    i = i + 1
end