import java.lang.Integer.max
import java.lang.Integer.min
import java.util.*
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles
private fun readArr() = readLine()!!.split(' ').map(String::toInt)
//Fast IO: https://github.com/finalchild/kotlin-fast-io/blob/master/src/solution.kt#L97

fun main(){
    var t=readInt()
    while(t-- > 0){
        var a=readLn()
        var b=readLn()
        var n1=a.length
        var n2=b.length
        var i=0
        var j=0
        var f=0
        while(i<n2 && j<n1){
            if(b[i]=='-'){
                if(b[i]==a[j]){
                    i++
                    j++
                }
                else{
                    f=1
                    break
                }
            }
            else{
                if(b[i]==a[j]){
                    i++
                    j++
                }
                else{
                    if(j+1<=n1-1 && a[j+1]=='-'){
                        i++
                        j+=2
                    }
                    else{
                        f=1
                        break
                    }
                }
            }
        }
        if(i==n2 && j==n1){
            println("YES")
        }
        else{
            println("NO")
        }
    }
}