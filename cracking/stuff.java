
import java.util.ArrayList;

class stuff{
	public static void main(String[] args) {
		String badWords = "um, like, ok, things";
		ArrayList split;
		System.out.println(badWords+"\n");
		split = badWords.split("\\s+");
	for (int i = 0; i < split.size(); i++)
		System.out.println(split[i]);
	}
}