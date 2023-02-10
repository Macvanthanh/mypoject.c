#include <stdio.h>
// cho nhập 1 số n sao cho n là số ngt sai bắt nhập lại
// nhập số âm thì kt chương trình
// sau đó tính tổng của các số ngt từ 1 đến n
// sử dụng hàm

int tong_cac_so_ngt(int a) {
	int S=0;
	for (int i = 1; i <= a; i++) {
		int dem = 0;
		for (int j = 1; j <= a; j++) {
			if (i % j == 0)
				dem++;
		}
		if (dem == 2)
			S += i;
	}
	return S;
}

int main() {
	int a;
	int dem = 0;
	do {  // chú ý nghiêm trọng nếu ta ko đặt biến dem=0 ở ngoài do thì sẽ bị lỗi ko khai báo ở dưới while
		// còn nếu ko đặt dem=0 ở trong vòng do thì sẽ bị lỗi đáp án vd: nhập 2 vào ngay từ đầu thì sẽ chạy bình thg như mong muốn 
		                                                             //  nhưng nếu nhập số một số ko phải số ngt ngay từ đầu thì  chương trình sẽ bắt nhập lại mãi mãi cho dù đợt sau có nhập là số nguyên to
																	 //  vì lúc đó ta nhập vào 1 số ko phải số ng to vd nhập số 4 thì ta qua vòng for sẽ đc dem = 3;(debug sẽ thấy)
		//nhớ lại sai dk while thì thoát khỏi vòng do 				 //  và sau khi nhập lại số là số nguyên tố VD=7 thì biến dem vẫn = 3;và lúc đó số 7 đi qua for được 2 biến dem nữa thì tổng bien dem=3+2; đúng với  đều kiện while
		//nhớ lại dúng dk while thì tiếp tục cho đến khi sai vòng do 	// ===> bị băt nhập lại liên tục
		// cách khắc phục lỗi trên bằng cách thêm dem =0 vào vòng do để nó quét lại giá trị dem khi kiểm tra xong số nhập vào đầu  tiên
		// VD:ta nhập vào số đầu ko phải số ngto là 4  vào vòng for thì ===> dem=3;
		// khi ra vòng for . dem=3 đúng với điều kiện khác 2 của while lên quay lại nhập lại gặp biến dem=0 và lúc đó dem sẽ nhận giá trị dem=0 ko còn là dem=3 nữa 
		// nhập tiếp tục vào là số ngt thì thoát ra vòng for ta dc biên dem=2 sai với điều kiện while thì lúc đó thoát khỏi vòng do và tiếp tục kiểm tra và on ra tổng.
		dem = 0;
		printf("nhap so a: ");
		scanf_s("%d", &a);
		if (a < 0)
			break;
		for (int i = 1; i <= a; i++) {
			if (a % i == 0)
				dem++;
		}
		
	} while (dem != 2);

	printf(" tong cac so ngt tu 1-->%d =%d",a,tong_cac_so_ngt(a));
}