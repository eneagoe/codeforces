#!/usr/bin/env ruby -w

v = (1..5).map do
  gets.split(/\s+/).map(&:to_i)
end

found = false
(0..4).each do |i|
  break if found
  (0..4).each do |j|
    if v[i][j] == 1
      puts (i - 2).abs + (j - 2).abs
      found = true
      break
    end
  end
end
