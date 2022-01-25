import java.util.*;

public class Main {

	static class runLengthEncode {
		public String readChar(String inputString) {

			int count = 0;
			String newString = "";
			for (int i = 0; i < inputString.length() - 1; i++) {
				char currentChar = inputString.charAt(i);
				char nextChar = inputString.charAt(i + 1);
				
				if (currentChar == nextChar) {
					count++;
					continue;
				} else if (currentChar != nextChar && count + 1 > 4) {
					if (count < 10) {
						newString += "/";
						newString += "0";
						newString += String.valueOf(count + 1);
						count = 0;
						newString += currentChar;
						continue;
					} else if (count > 10) {
						newString += "/";
						newString += String.valueOf(count + 1);
						count = 0;
						newString += currentChar;
						continue;
					}
				} else if (currentChar != nextChar && count == 0) {
					newString += currentChar;
				} else if(currentChar != nextChar && count <= 4)
				{
					for (int ii = 0; ii < count + 1; ii++) {
						newString += currentChar;
					}
				} else if(nextChar == ' ') {
					newString += currentChar;
				}
			}
			System.out.print(newString);
			return newString;
		}
	}

	public static void main(String[] agrs) {
		Scanner myObj = new Scanner(System.in);
		runLengthEncode obj = new runLengthEncode();
		System.out.println("Please enter string to encode: ");
		String inputString = myObj.nextLine();
		String outPut = obj.readChar(inputString);
		System.out.print(outPut);
	}

}
