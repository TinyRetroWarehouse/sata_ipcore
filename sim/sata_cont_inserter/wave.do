onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /sata_cont_inserter/reset
add wave -noupdate /sata_cont_inserter/clk
add wave -noupdate -divider <NULL>
add wave -noupdate -radix hexadecimal /sata_cont_inserter/i_data
add wave -noupdate /sata_cont_inserter/i_datak
add wave -noupdate /sata_cont_inserter/i_ready
add wave -noupdate -divider <NULL>
add wave -noupdate -radix hexadecimal /sata_cont_inserter/o_data
add wave -noupdate /sata_cont_inserter/o_datak
add wave -noupdate /sata_cont_inserter/o_ready
add wave -noupdate -divider <NULL>
add wave -noupdate -radix hexadecimal /sata_cont_inserter/lfsrval
add wave -noupdate -radix hexadecimal /sata_cont_inserter/randval
add wave -noupdate -radix hexadecimal -expand /sata_cont_inserter/data_reg
add wave -noupdate -radix hexadecimal /sata_cont_inserter/datak_reg
add wave -noupdate -radix hexadecimal /sata_cont_inserter/repeat_reg
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {0 ns} 0}
quietly wave cursor active 0
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 1
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ns
update
WaveRestoreZoom {0 ns} {1 us}
