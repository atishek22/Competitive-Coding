import java.util.Scanner

fun main() {
    var t: Int
    var a: Int
    var b: Int
    val reader = Scanner(System.`in`)

    t = reader.nextInt()
    while(t > 0) {
        a = reader.nextInt()
        b = reader.nextInt()
        println(a+b)
        t--
    }
}
