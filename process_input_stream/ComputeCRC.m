function sum_eight_bit = ComputeCRC(array, length) 

sum = uint16(0);

for j = 1:length
    sum = sum + uint16(array(j));
end
if (sum > hex2dec('0xFF'))
    sum = bitshift(sum, -8) + bitand(sum, hex2dec('0xFF'));
end

sum_eight_bit = uint8(sum);

end