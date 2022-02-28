from Disk import Disk
from Processor import Processor
from Ram import Ram
from Pc import Pc

pc = Pc() # buat objek PC

# instansiasi
pc.setProcessor(Processor("Radeon", 900000))
pc.setDisk(Disk("SSD", 3000, 9000000))
pc.setRam(Ram(32, 15000000))
pc.setTotalPrice(pc.getProcessor().getPrice() + pc.getDisk().getPrice() + pc.getRam().getPrice())

print("Keterangan PC : ")
print("Nama Processor : " + pc.getProcessor().getName())
print("Harga Processor : " + str(pc.getProcessor().getPrice()))
print("Tipe Disk : " + pc.getDisk().getType())
print("Kapasitas Disk : " + str(pc.getDisk().getCapacity()))
print("Harga Disk : " + str(pc.getDisk().getPrice()))
print("Kapasitas RAM : " + str(pc.getRam().getCapacity()))
print("Harga RAM : " + str(pc.getRam().getPrice()))
print("-> Total Harga : " + str(pc.getTotalPrice()))