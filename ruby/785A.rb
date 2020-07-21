#!/usr/bin/env ruby -w

polyhedrons = {"Tetrahedron" => 4, "Cube" => 6, "Octahedron" => 8,
               "Dodecahedron" => 12, "Icosahedron" => 20}

n = gets.strip.to_i
s = 0

n.times do
  s += polyhedrons[gets.strip.chomp]
end

puts s
