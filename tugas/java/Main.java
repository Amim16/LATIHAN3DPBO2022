public class Main {

    public static void main(String[] args) {

        Pc pc = new Pc(); // buat objek PC

        // instansiasi
        pc.setProcessor(new Processor("ٌRyzen", 700000));
        pc.setDisk(new Disk("HDD", 1000, 530000));
        pc.setRam(new Ram(4, 350000));
        pc.setTotalPrice(pc.getProcessor().getPrice() + pc.getDisk().getPrice() + pc.getRam().getPrice());

        System.out.println("Keterangan PC : ");
        System.out.println("Nama Processor : " + pc.getProcessor().getName());
        System.out.println("Harga Processor : " + pc.getProcessor().getPrice());
        System.out.println("Tipe Disk : " + pc.getDisk().getType());
        System.out.println("Kapasitas Disk : " + pc.getDisk().getCapacity());
        System.out.println("Harga Disk : " + pc.getDisk().getPrice());
        System.out.println("Kapasitas RAM : " + pc.getRam().getCapacity());
        System.out.println("Harga RAM : " + pc.getRam().getPrice());
        System.out.println("-> Total Harga : " + pc.getTotalPrice());

    }
}