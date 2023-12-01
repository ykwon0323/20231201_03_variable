/**
 * Virable Scope 변수의 유효범위
 * 
 * 변수의 선언 위치에 따라 
 * 해당 변수의 유효 범위, 
 * 메모리 반환 시기, 
 * 초기화 여부, 
 * 저장 되는 장소 
 * 등이 변경됨
 * 
 * 1 지역 변수 (local viriable)
 * 2 전역 변수 (global variable)
 * 3 정적 변수 (static variable)
 * 4 레지스터 변수 (register variable)
*/

/**
 * 메모리 구조
 * Code 영역
 * Data 영역
 *  - static variable 정적 변수
 *  - global variable 전역 변수
 *  - 프로그램이 종료되어야 메모리에서 사라짐
 *  - 외부파일의 전역변수 사용을 위해 extern 키워드 사용 필요
 * Stack 영역 
 *  - local variable 지역 변수 
 *  - 블록 종료시 메모리에서 사라짐
 * Heap 영역
 * ---------------------------
 * CPU 
 * Register 영역
 *  - register 키워드 사용
 *  - CPU register 메모리에 저장되어 빠르게 접근 가능
 *  - 컴퓨터의 레지스터는 매우 작은 크기의 메모리이므로, 이 영역에 변수를 선언하기 힘든 경우가 많음
 *  - C 컴파일러는 해당 변수를 그냥 지역변수로 선언하게 됨
 * 
 * 
*/