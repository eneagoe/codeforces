s = gets.strip.chomp

lower = s.each_char.count { |c| ('a'..'z').cover?(c) }
upper = s.each_char.count { |c| ('A'..'Z').cover?(c) }

if lower >= upper
  puts s.downcase
else
  puts s.upcase
end
