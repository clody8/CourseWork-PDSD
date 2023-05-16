#include "HeaderNode.h"
#include "HeaderClassList.h"
#include "HeaderList.h"
#include "HeaderSet.h"
#include "Headerqueue.h"
#include "HeaderVector.h"
#include <ctime>
#include <iomanip>

void line()
{
    for (int i = 0; i < 126; i++)
    {
        cout << "-";
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Введите мощность (больше или равной 1000): ";
    int N;
    cin >> N;

    // 1. Создание множества

    // Односвязный список
    auto startNodeCreate = clock();
    Node nd;
    nd.first = f5(N, 0, N * 10);
    auto endNodeCreate = clock();
    double timeNodeCreate = endNodeCreate - startNodeCreate;

    // Класс Список
    auto startClassListCreate = clock();
    ClassList clsLst;
    clsLst.f5(N, 0, N * 10);
    auto endClassListCreate = clock();
    double timeClassListCreate = endClassListCreate - startClassListCreate;

    // Контейнерный класс List
    auto startListCreate = clock();
    List list;
    list.f5(N, 0, N * 10);
    auto endListCreate = clock();
    double timeListCreate = endListCreate - startListCreate;

    // Контейнерный класс Set
    auto startSetCreate = clock();
    Set st;
    st.f5(N, 0, N * 10);
    auto endSetCreate = clock();
    double timeSetCreate = endSetCreate - startSetCreate;

    // Контейнерный класс Vector
    auto startVectorCreate = clock();
    Vector vctr;
    vctr.f5(N, 0, N * 10);
    auto endVectorCreate = clock();
    double timeVectorCreate = endVectorCreate - startVectorCreate;

    // Контейнерный класс queue
    auto startQueueCreate = clock();
    Queue q;
    q.f5(N, 0, N * 10);
    auto endQueueCreate = clock();
    double timeQueueCreate = endQueueCreate - startQueueCreate;

    cout << endl << endl;
    line();
    cout << "                      | Односвязный список |  Класс 'Список' |      List     |      Set      |     Vector    |     queue     |" << endl;
    line();
    cout << " Создание множества   |" << setw(11) << timeNodeCreate << setw(10) << "|" << setw(9) << timeClassListCreate << setw(9) << "|" << setw(8) << timeListCreate << setw(8) << "|" << setw(8) << timeSetCreate << setw(8) << "|" << setw(8) << timeVectorCreate << setw(8) << "|" << setw(8) << timeQueueCreate << setw(8) << "|" << endl;

    // 2. Мощность

    // Мощность односвязного списка
    auto startNodeCount = clock();
    f6(nd.first);
    auto endNodeCount = clock();
    double timeNodeCount = endNodeCount - startNodeCount;

    // Мощность класса Список
    auto startClassListCount = clock();
    clsLst.f6(clsLst.first);
    auto endClassListCount = clock();
    double timeClassListCount = endClassListCount - startClassListCount;

    // Мощность List
    auto startListCount = clock();
    list.f6(list.lst);
    auto endListCount = clock();
    double timeListCount = endListCount - startListCount;

    // Мощность Set
    auto startSetCount = clock();
    st.f6(st.lst);
    auto endSetCount = clock();
    double timeSetCount = endSetCount - startSetCount;

    // Мощность Vector
    auto startVectorCount = clock();
    vctr.f6(vctr.lst);
    auto endVectorCount = clock();
    double timeVectorCount = endVectorCount - startVectorCount;

    // Мощность queue
    auto startQueueCount = clock();
    q.f6(q.lst);
    auto endQueueCount = clock();
    double timeQueueCount = endQueueCount - startQueueCount;

    line();
    cout << " Мощность             |" << setw(11) << timeNodeCount << setw(10) << "|" << setw(9) << timeClassListCount << setw(9) << "|" << setw(8) << timeListCount << setw(8) << "|" << setw(8) << timeSetCount << setw(8) << "|" << setw(8) << timeVectorCount << setw(8) << "|" << setw(8) << timeQueueCount << setw(8) << "|" << endl;

    // 3. Подмножество А-А

    // Для односвязного списка
    auto startNodeSubsetAA = clock();
    f9(A.first, A.first);
    auto endNodeSubsetAA = clock();
    double timeNodeSubsetAA = endNodeSubsetAA - startNodeSubsetAA;

    // Для класса Список
    auto startClassListSubsetAA = clock();
    B.f9(B.first, B.first);
    auto endClassListSubsetAA = clock();
    double timeClassListSubsetAA = endClassListSubsetAA - startClassListSubsetAA;

    // Для List
    auto startListSubsetAA = clock();
    C.f9(C.lst, C.lst);
    auto endListSubsetAA = clock();
    double timeListSubsetAA = endListSubsetAA - startListSubsetAA;

    // Для Set
    auto startSetSubsetAA = clock();
    D.f9(D.lst, D.lst);
    auto endSetSubsetAA = clock();
    double timeSetSubsetAA = endSetSubsetAA - startSetSubsetAA;

    // Для Vector
    auto startSetSubsetAA = clock();
    D.f9(D.lst, D.lst);
    auto endSetSubsetAA = clock();
    double timeSetSubsetAA = endSetSubsetAA - startSetSubsetAA;

    // Для Queue
    auto startSetSubsetAA = clock();
    D.f9(D.lst, D.lst);
    auto endSetSubsetAA = clock();
    double timeSetSubsetAA = endSetSubsetAA - startSetSubsetAA;

    line();
    cout << " Подмножество А-А     |" << setw(11) << timeNodeSubsetAA << setw(10) << "|" << setw(9) << timeClassListSubsetAA << setw(9) << "|" << setw(8) << timeListSubsetAA << setw(8) << "|" << setw(8) << timeSetSubsetAA << setw(8) << "|" << setw(8) << timeSetSubsetAA << setw(8) << "|" << setw(8) << timeSetSubsetAA << setw(8) << "|" << endl;

    // 4. Подмножество A-B

    // Для односвязного списка
    Node A1;
    A1.first = f5(N, 0, N * 10);
    auto startNodeSubsetAB = clock();
    f9(A1.first, A.first);
    auto endNodeSubsetAB = clock();
    double timeNodeSubsetAB = endNodeSubsetAB - startNodeSubsetAB;

    // Для класса Список
    ClassList B1;
    B1.f5(N, 0, N * 10);
    auto startClassListSubsetAB = clock();
    B1.f9(B1.first, B.first);
    auto endClassListSubsetAB = clock();
    double timeClassListSubsetAB = endClassListSubsetAB - startClassListSubsetAB;

    // Для List
    List C1;
    C1.f5(N, 0, N * 10);
    auto startListSubsetAB = clock();
    C1.f9(C1.lst, C.lst);
    auto endListSubsetAB = clock();
    double timeListSubsetAB = endListSubsetAB - startListSubsetAB;

    // Для Set
    Set D1;
    D1.f5(N, 0, N * 10);
    auto startSetSubsetAB = clock();
    D.f9(D1.lst, D.lst);
    auto endSetSubsetAB = clock();
    double timeSetSubsetAB = endSetSubsetAB - startSetSubsetAB;

    line();
    cout << " Подмножество B-A     |" << setw(11) << timeNodeSubsetAB << setw(10) << "|" << setw(9) << timeClassListSubsetAB << setw(9) << "|" << setw(8) << timeListSubsetAB << setw(8) << "|" << setw(8) << timeSetSubsetAB << setw(8) << "|" << setw(8) << timeSetSubsetAB << setw(8) << "|" << setw(8) << timeSetSubsetAB << setw(8) << "|" << endl;

    // 5. Равенство А-А

    // Для односвязного списка
    auto startNodeEqualAA = clock();
    f10(A.first, A.first);
    auto endNodeEqualAA = clock();
    double timeNodeEqualAA = endNodeEqualAA - startNodeEqualAA;

    // Для класса Список
    auto startClassListEqualAA = clock();
    B.f10(B.first, B.first);
    auto endClassListEqualAA = clock();
    double timeClassListEqualAA = endClassListEqualAA - startClassListEqualAA;

    // Для List
    auto startListEqualAA = clock();
    C.f10(C.lst, C.lst);
    auto endListEqualAA = clock();
    double timeListEqualAA = endListEqualAA - startListEqualAA;

    // Для Set
    auto startSetEqualAA = clock();
    D.f10(D.lst, D.lst);
    auto endSetEqualAA = clock();
    double timeSetEqualAA = endSetEqualAA - startSetEqualAA;

    line();
    cout << " Равенство А-А        |" << setw(11) << timeNodeEqualAA << setw(10) << "|" << setw(9) << timeClassListEqualAA << setw(9) << "|" << setw(8) << timeListEqualAA << setw(8) << "|" << setw(8) << timeSetEqualAA << setw(8) << "|" << setw(8) << timeSetEqualAA << setw(8) << "|" << setw(8) << timeSetEqualAA << setw(8) << "|" << endl;

    // 6. Равенство A-B

    // Для односвязного списка
    auto startNodeEqualAB = clock();
    f10(A.first, A1.first);
    auto endNodeEqualAB = clock();
    double timeNodeEqualAB = endNodeEqualAB - startNodeEqualAB;

    // Для класса Список
    auto startClassListEqualAB = clock();
    B.f10(B.first, B1.first);
    auto endClassListEqualAB = clock();
    double timeClassListEqualAB = endClassListEqualAB - startClassListEqualAB;

    // Для List
    auto startListEqualAB = clock();
    C.f10(C.lst, C1.lst);
    auto endListEqualAB = clock();
    double timeListEqualAB = endListEqualAB - startListEqualAB;

    // Для Set
    auto startSetEqualAB = clock();
    D.f10(D.lst, D1.lst);
    auto endSetEqualAB = clock();
    double timeSetEqualAB = endSetEqualAB - startSetEqualAB;

    line();
    cout << " Равенство В-А        |" << setw(11) << timeNodeEqualAB << setw(10) << "|" << setw(9) << timeClassListEqualAB << setw(9) << "|" << setw(8) << timeListEqualAB << setw(8) << "|" << setw(8) << timeSetEqualAB << setw(8) << "|" << setw(8) << timeSetEqualAB << setw(8) << "|" << setw(8) << timeSetEqualAB << setw(8) << "|" << endl;

    // 7. Объединение 

    // Для односвязного списка
    Node A2;
    auto startNodeUnion = clock();
    A2.first = f11(A.first, A1.first);
    auto endNodeUnion = clock();
    double timeNodeUnion = endNodeUnion - startNodeUnion;

    // Для класса Список
    auto startClassListUnion = clock();
    ClassList* B2 = B.f11(B.first, B1.first);
    auto endClassListUnion = clock();
    double timeClassListUnion = endClassListUnion - startClassListUnion;

    // Для List
    auto startListUnion = clock();
    List C2 = C.f11(C.lst, C1.lst);
    auto endListUnion = clock();
    double timeListUnion = endListUnion - startListUnion;

    // Для Set
    auto startSetUnion = clock();
    Set D2 = D.f11(D.lst, D1.lst);
    auto endSetUnion = clock();
    double timeSetUnion = endSetUnion - startSetUnion;

    line();
    cout << " Объединение          |" << setw(11) << timeNodeUnion << setw(10) << "|" << setw(9) << timeClassListUnion << setw(9) << "|" << setw(8) << timeListUnion << setw(8) << "|" << setw(8) << timeSetUnion << setw(8) << "|" << setw(8) << timeSetUnion << setw(8) << "|" << setw(8) << timeSetUnion << setw(8) << "|" << endl;

    // 8. Пересечение

    // Для односвязного списка
    Node A3;
    auto startNodeIntersection = clock();
    A3.first = f12(A.first, A1.first);
    auto endNodeIntersection = clock();
    double timeNodeIntersection = endNodeIntersection - startNodeIntersection;

    // Для класса Список
    auto startClassListIntersection = clock();
    ClassList* B3 = B.f12(B.first, B1.first);
    auto endClassListIntersection = clock();
    double timeClassListIntersection = endClassListIntersection - startClassListIntersection;

    // Для List
    auto startListIntersection = clock();
    List C3 = C.f12(C.lst, C1.lst);
    auto endListIntersection = clock();
    double timeListIntersection = endListIntersection - startListIntersection;

    // Для Set
    auto startSetIntersection = clock();
    Set D3 = D.f12(D.lst, D1.lst);
    auto endSetIntersection = clock();
    double timeSetIntersection = endSetIntersection - startSetIntersection;

    line();
    cout << " Пересечение          |" << setw(11) << timeNodeIntersection << setw(10) << "|" << setw(9) << timeClassListIntersection << setw(9) << "|" << setw(8) << timeListIntersection << setw(8) << "|" << setw(8) << timeSetIntersection << setw(8) << "|" << setw(8) << timeSetIntersection << setw(8) << "|" << setw(8) << timeSetIntersection << setw(8) << "|" << endl;

    // 9. Разность А-В

    // Для односвязного списка
    Node A4;
    auto startNodeDifAB = clock();
    A4.first = f13(A.first, A1.first);
    auto endNodeDifAB = clock();
    double timeNodeDifAB = endNodeDifAB - startNodeDifAB;

    // Для класса Список
    auto startClassListDifAB = clock();
    ClassList* B4 = B.f13(B.first, B1.first);
    auto endClassListDifAB = clock();
    double timeClassListDifAB = endClassListDifAB - startClassListDifAB;

    // Для List
    auto startListDifAB = clock();
    List C4 = C.f13(C.lst, C1.lst);
    auto endListDifAB = clock();
    double timeListDifAB = endListDifAB - startListDifAB;

    // Для Set
    auto startSetDifAB = clock();
    Set D4 = D.f13(D.lst, D1.lst);
    auto endSetDifAB = clock();
    double timeSetDifAB = endSetDifAB - startSetDifAB;

    line();
    cout << " Разность A-B         |" << setw(11) << timeNodeDifAB << setw(10) << "|" << setw(9) << timeClassListDifAB << setw(9) << "|" << setw(8) << timeListDifAB << setw(8) << "|" << setw(8) << timeSetDifAB << setw(8) << "|" << setw(8) << timeSetDifAB << setw(8) << "|" << setw(8) << timeSetDifAB << setw(8) << "|" << endl;

    // 10. Разность В-А

    // Для односвязного списка
    Node A5;
    auto startNodeDifBA = clock();
    A5.first = f13(A1.first, A.first);
    auto endNodeDifBA = clock();
    double timeNodeDifBA = endNodeDifBA - startNodeDifBA;

    // Для класса Список
    auto startClassListDifBA = clock();
    ClassList* B5 = B1.f13(B1.first, B.first);
    auto endClassListDifBA = clock();
    double timeClassListDifBA = endClassListDifBA - startClassListDifBA;

    // Для List
    auto startListDifBA = clock();
    List C5 = C1.f13(C1.lst, C.lst);
    auto endListDifBA = clock();
    double timeListDifBA = endListDifBA - startListDifBA;

    // Для Set
    auto startSetDifBA = clock();
    Set D5 = D1.f13(D1.lst, D.lst);
    auto endSetDifBA = clock();
    double timeSetDifBA = endSetDifBA - startSetDifBA;

    line();
    cout << " Разность B-A         |" << setw(11) << timeNodeDifAB << setw(10) << "|" << setw(9) << timeClassListDifAB << setw(9) << "|" << setw(8) << timeListDifAB << setw(8) << "|" << setw(8) << timeSetDifAB << setw(8) << "|" << setw(8) << timeSetDifAB << setw(8) << "|" << setw(8) << timeSetDifAB << setw(8) << "|" << endl;

    // 11. Симметричная разность

    // Для односвязного списка
    Node A6;
    auto startNodeSymDif = clock();
    A6.first = f14(A1.first, A.first);
    auto endNodeSymDif = clock();
    double timeNodeSymDif = endNodeSymDif - startNodeSymDif;

    // Для класса Список
    auto startClassListSymDif = clock();
    ClassList* B6 = B.f14(B1.first, B.first);
    auto endClassListSymDif = clock();
    double timeClassListSymDif = endClassListSymDif - startClassListSymDif;

    // Для List
    auto startListSymDif = clock();
    List C6 = C.f14(C1.lst, C.lst);
    auto endListSymDif = clock();
    double timeListSymDif = endListSymDif - startListSymDif;

    // Для Set
    auto startSetSymDif = clock();
    Set D6 = D.f14(D1.lst, D.lst);
    auto endSetSymDif = clock();
    double timeSetSymDif = endSetSymDif - startSetSymDif;

    line();
    cout << " Симметричная разность|" << setw(11) << timeNodeSymDif << setw(10) << "|" << setw(9) << timeClassListSymDif << setw(9) << "|" << setw(8) << timeListSymDif << setw(8) << "|" << setw(8) << timeSetSymDif << setw(8) << "|" << setw(8) << timeSetSymDif << setw(8) << "|" << setw(8) << timeSetSymDif << setw(8) << "|" << endl;
    line();

    return 0;
}