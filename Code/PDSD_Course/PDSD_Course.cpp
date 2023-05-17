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
    f9(nd.first, nd.first);
    auto endNodeSubsetAA = clock();
    double timeNodeSubsetAA = endNodeSubsetAA - startNodeSubsetAA;

    // Для класса Список
    auto startClassListSubsetAA = clock();
    clsLst.f9(clsLst.first, clsLst.first);
    auto endClassListSubsetAA = clock();
    double timeClassListSubsetAA = endClassListSubsetAA - startClassListSubsetAA;

    // Для List
    auto startListSubsetAA = clock();
    list.f9(list.lst, list.lst);
    auto endListSubsetAA = clock();
    double timeListSubsetAA = endListSubsetAA - startListSubsetAA;

    // Для Set
    auto startSetSubsetAA = clock();
    st.f9(st.lst, st.lst);
    auto endSetSubsetAA = clock();
    double timeSetSubsetAA = endSetSubsetAA - startSetSubsetAA;

    // Для Vector
    auto startVectorSubsetAA = clock();
    vctr.f9(vctr.lst, vctr.lst);
    auto endVectorSubsetAA = clock();
    double timeVectorSubsetAA = endVectorSubsetAA - startVectorSubsetAA;

    // Для Queue
    auto startQueueSubsetAA = clock();
    q.f9(q.lst, q.lst);
    auto endQueueSubsetAA = clock();
    double timeQueueSubsetAA = endQueueSubsetAA - startQueueSubsetAA;

    line();
    cout << " Подмножество А-А     |" << setw(11) << timeNodeSubsetAA << setw(10) << "|" << setw(9) << timeClassListSubsetAA << setw(9) << "|" << setw(8) << timeListSubsetAA << setw(8) << "|" << setw(8) << timeSetSubsetAA << setw(8) << "|" << setw(8) << timeVectorSubsetAA << setw(8) << "|" << setw(8) << timeQueueSubsetAA << setw(8) << "|" << endl;

    // 4. Подмножество B-A

    // Для односвязного списка
    Node nd1;
    nd1.first = f5(N, 0, N * 10);
    auto startNodeSubsetAB = clock();
    f9(nd1.first, nd.first);
    auto endNodeSubsetAB = clock();
    double timeNodeSubsetAB = endNodeSubsetAB - startNodeSubsetAB;

    // Для класса Список
    ClassList clsLst1;
    clsLst1.f5(N, 0, N * 10);
    auto startClassListSubsetAB = clock();
    clsLst1.f9(clsLst1.first, clsLst.first);
    auto endClassListSubsetAB = clock();
    double timeClassListSubsetAB = endClassListSubsetAB - startClassListSubsetAB;

    // Для List
    List list1;
    list1.f5(N, 0, N * 10);
    auto startListSubsetAB = clock();
    list1.f9(list1.lst, list.lst);
    auto endListSubsetAB = clock();
    double timeListSubsetAB = endListSubsetAB - startListSubsetAB;

    // Для Set
    Set st1;
    st1.f5(N, 0, N * 10);
    auto startSetSubsetAB = clock();
    st1.f9(st1.lst, st.lst);
    auto endSetSubsetAB = clock();
    double timeSetSubsetAB = endSetSubsetAB - startSetSubsetAB;

    // Для Vector
    Vector vctr1;
    vctr1.f5(N, 0, N * 10);
    auto startVectorSubsetAB = clock();
    vctr1.f9(vctr1.lst, vctr.lst);
    auto endVectorSubsetAB = clock();
    double timeVectorSubsetAB = endVectorSubsetAB - startVectorSubsetAB;

    // Для queue
    Queue q1;
    q1.f5(N, 0, N * 10);
    auto startQueueSubsetAB = clock();
    q1.f9(q1.lst, q.lst);
    auto endQueueSubsetAB = clock();
    double timeQueueSubsetAB = endQueueSubsetAB - startQueueSubsetAB;

    line();
    cout << " Подмножество B-A     |" << setw(11) << timeNodeSubsetAB << setw(10) << "|" << setw(9) << timeClassListSubsetAB << setw(9) << "|" << setw(8) << timeListSubsetAB << setw(8) << "|" << setw(8) << timeSetSubsetAB << setw(8) << "|" << setw(8) << timeVectorSubsetAB << setw(8) << "|" << setw(8) << timeQueueSubsetAB << setw(8) << "|" << endl;

    // 5. Равенство А-А

    // Для односвязного списка
    auto startNodeEqualAA = clock();
    f10(nd.first, nd.first);
    auto endNodeEqualAA = clock();
    double timeNodeEqualAA = endNodeEqualAA - startNodeEqualAA;

    // Для класса Список
    auto startClassListEqualAA = clock();
    clsLst.f10(clsLst.first, clsLst.first);
    auto endClassListEqualAA = clock();
    double timeClassListEqualAA = endClassListEqualAA - startClassListEqualAA;

    // Для List
    auto startListEqualAA = clock();
    list.f10(list.lst, list.lst);
    auto endListEqualAA = clock();
    double timeListEqualAA = endListEqualAA - startListEqualAA;

    // Для Set
    auto startSetEqualAA = clock();
    st.f10(st.lst, st.lst);
    auto endSetEqualAA = clock();
    double timeSetEqualAA = endSetEqualAA - startSetEqualAA;

    // Для Vector
    auto startVectorEqualAA = clock();
    vctr.f10(vctr.lst, vctr.lst);
    auto endVectorEqualAA = clock();
    double timeVectorEqualAA = endVectorEqualAA - startVectorEqualAA;

    // Для queue
    auto startQueueEqualAA = clock();
    q.f10(q.lst, q.lst);
    auto endQueueEqualAA = clock();
    double timeQueueEqualAA = endQueueEqualAA - startQueueEqualAA;

    line();
    cout << " Равенство А-А        |" << setw(11) << timeNodeEqualAA << setw(10) << "|" << setw(9) << timeClassListEqualAA << setw(9) << "|" << setw(8) << timeListEqualAA << setw(8) << "|" << setw(8) << timeSetEqualAA << setw(8) << "|" << setw(8) << timeVectorEqualAA << setw(8) << "|" << setw(8) << timeQueueEqualAA << setw(8) << "|" << endl;

    // 6. Равенство B-A

    // Для односвязного списка
    auto startNodeEqualAB = clock();
    f10(nd.first, nd1.first);
    auto endNodeEqualAB = clock();
    double timeNodeEqualAB = endNodeEqualAB - startNodeEqualAB;

    // Для класса Список
    auto startClassListEqualAB = clock();
    clsLst.f10(clsLst.first, clsLst1.first);
    auto endClassListEqualAB = clock();
    double timeClassListEqualAB = endClassListEqualAB - startClassListEqualAB;

    // Для List
    auto startListEqualAB = clock();
    list.f10(list.lst, list1.lst);
    auto endListEqualAB = clock();
    double timeListEqualAB = endListEqualAB - startListEqualAB;

    // Для Set
    auto startSetEqualAB = clock();
    st.f10(st.lst, st1.lst);
    auto endSetEqualAB = clock();
    double timeSetEqualAB = endSetEqualAB - startSetEqualAB;

    // Для Vector
    auto startVectorEqualAB = clock();
    vctr.f10(vctr.lst, vctr1.lst);
    auto endVectorEqualAB = clock();
    double timeVectorEqualAB = endVectorEqualAB - startVectorEqualAB;

    // Для queue
    auto startQueueEqualAB = clock();
    q.f10(q.lst, q1.lst);
    auto endQueueEqualAB = clock();
    double timeQueueEqualAB = endQueueEqualAB - startQueueEqualAB;

    line();
    cout << " Равенство В-А        |" << setw(11) << timeNodeEqualAB << setw(10) << "|" << setw(9) << timeClassListEqualAB << setw(9) << "|" << setw(8) << timeListEqualAB << setw(8) << "|" << setw(8) << timeSetEqualAB << setw(8) << "|" << setw(8) << timeVectorEqualAB << setw(8) << "|" << setw(8) << timeQueueEqualAB << setw(8) << "|" << endl;

    // 7. Объединение 

    // Для односвязного списка
    Node nd2;
    auto startNodeUnion = clock();
    nd2.first = f11(nd.first, nd1.first);
    auto endNodeUnion = clock();
    double timeNodeUnion = endNodeUnion - startNodeUnion;

    // Для класса Список
    auto startClassListUnion = clock();
    ClassList* clsLst2 = clsLst.f11(clsLst.first, clsLst1.first);
    auto endClassListUnion = clock();
    double timeClassListUnion = endClassListUnion - startClassListUnion;

    // Для List
    auto startListUnion = clock();
    List list2 = list.f11(list.lst, list1.lst);
    auto endListUnion = clock();
    double timeListUnion = endListUnion - startListUnion;

    // Для Set
    auto startSetUnion = clock();
    Set st2 = st.f11(st.lst, st1.lst);
    auto endSetUnion = clock();
    double timeSetUnion = endSetUnion - startSetUnion;

    // Для Vector
    auto startVectorUnion = clock();
    Vector vctr2 = vctr.f11(vctr.lst, vctr1.lst);
    auto endVectorUnion = clock();
    double timeVectorUnion = endVectorUnion - startVectorUnion;

    // Для queue
    auto startQueueUnion = clock();
    Queue q2 = q.f11(q.lst, q1.lst);
    auto endQueueUnion = clock();
    double timeQueueUnion = endQueueUnion - startQueueUnion;

    line();
    cout << " Объединение          |" << setw(11) << timeNodeUnion << setw(10) << "|" << setw(9) << timeClassListUnion << setw(9) << "|" << setw(8) << timeListUnion << setw(8) << "|" << setw(8) << timeSetUnion << setw(8) << "|" << setw(8) << timeVectorUnion << setw(8) << "|" << setw(8) << timeQueueUnion << setw(8) << "|" << endl;

    // 8. Пересечение

    // Для односвязного списка
    Node nd3;
    auto startNodeIntersection = clock();
    nd3.first = f12(nd.first, nd1.first);
    auto endNodeIntersection = clock();
    double timeNodeIntersection = endNodeIntersection - startNodeIntersection;

    // Для класса Список
    auto startClassListIntersection = clock();
    ClassList* clsLst3 = clsLst.f12(clsLst.first, clsLst1.first);
    auto endClassListIntersection = clock();
    double timeClassListIntersection = endClassListIntersection - startClassListIntersection;

    // Для List
    auto startListIntersection = clock();
    List list3 = list.f12(list.lst, list1.lst);
    auto endListIntersection = clock();
    double timeListIntersection = endListIntersection - startListIntersection;

    // Для Set
    auto startSetIntersection = clock();
    Set st3 = st.f12(st.lst, st1.lst);
    auto endSetIntersection = clock();
    double timeSetIntersection = endSetIntersection - startSetIntersection;

    // Для Vector
    auto startVectorIntersection = clock();
    Vector vctr3 = vctr.f12(vctr.lst, vctr1.lst);
    auto endVectorIntersection = clock();
    double timeVectorIntersection = endVectorIntersection - startVectorIntersection;

    // Для queue
    auto startQueueIntersection = clock();
    Queue q3 = q.f12(q.lst, q1.lst);
    auto endQueueIntersection = clock();
    double timeQueueIntersection = endQueueIntersection - startQueueIntersection;

    line();
    cout << " Пересечение          |" << setw(11) << timeNodeIntersection << setw(10) << "|" << setw(9) << timeClassListIntersection << setw(9) << "|" << setw(8) << timeListIntersection << setw(8) << "|" << setw(8) << timeSetIntersection << setw(8) << "|" << setw(8) << timeVectorIntersection << setw(8) << "|" << setw(8) << timeQueueIntersection << setw(8) << "|" << endl;

    // 9. Разность А-В

    // Для односвязного списка
    Node nd4;
    auto startNodeDifAB = clock();
    nd4.first = f13(nd.first, nd1.first);
    auto endNodeDifAB = clock();
    double timeNodeDifAB = endNodeDifAB - startNodeDifAB;

    // Для класса Список
    auto startClassListDifAB = clock();
    ClassList* clsLst4 = clsLst.f13(clsLst.first, clsLst1.first);
    auto endClassListDifAB = clock();
    double timeClassListDifAB = endClassListDifAB - startClassListDifAB;

    // Для List
    auto startListDifAB = clock();
    List list4 = list.f13(list.lst, list1.lst);
    auto endListDifAB = clock();
    double timeListDifAB = endListDifAB - startListDifAB;

    // Для Set
    auto startSetDifAB = clock();
    Set st4 = st.f13(st.lst, st1.lst);
    auto endSetDifAB = clock();
    double timeSetDifAB = endSetDifAB - startSetDifAB;

    // Для Vector
    auto startVectorDifAB = clock();
    Vector vctr4 = vctr.f13(vctr.lst, vctr1.lst);
    auto endVectorDifAB = clock();
    double timeVectorDifAB = endVectorDifAB - startVectorDifAB;

    // Для queue
    auto startQueueDifAB = clock();
    Queue q4 = q.f13(q.lst, q1.lst);
    auto endQueueDifAB = clock();
    double timeQueueDifAB = endQueueDifAB - startQueueDifAB;

    line();
    cout << " Разность A-B         |" << setw(11) << timeNodeDifAB << setw(10) << "|" << setw(9) << timeClassListDifAB << setw(9) << "|" << setw(8) << timeListDifAB << setw(8) << "|" << setw(8) << timeSetDifAB << setw(8) << "|" << setw(8) << timeVectorDifAB << setw(8) << "|" << setw(8) << timeQueueDifAB << setw(8) << "|" << endl;

    // 10. Разность В-А

    // Для односвязного списка
    Node nd5;
    auto startNodeDifBA = clock();
    nd5.first = f13(nd1.first, nd.first);
    auto endNodeDifBA = clock();
    double timeNodeDifBA = endNodeDifBA - startNodeDifBA;

    // Для класса Список
    auto startClassListDifBA = clock();
    ClassList* clsLst5 = clsLst1.f13(clsLst1.first, clsLst.first);
    auto endClassListDifBA = clock();
    double timeClassListDifBA = endClassListDifBA - startClassListDifBA;

    // Для List
    auto startListDifBA = clock();
    List list5 = list1.f13(list1.lst, list.lst);
    auto endListDifBA = clock();
    double timeListDifBA = endListDifBA - startListDifBA;

    // Для Set
    auto startSetDifBA = clock();
    Set st5 = st1.f13(st1.lst, st.lst);
    auto endSetDifBA = clock();
    double timeSetDifBA = endSetDifBA - startSetDifBA;

    // Для Vector
    auto startVectorDifBA = clock();
    Vector vctr5 = vctr1.f13(vctr1.lst, vctr.lst);
    auto endVectorDifBA = clock();
    double timeVectorDifBA = endVectorDifBA - startVectorDifBA;

    // Для queue
    auto startQueueDifBA = clock();
    Queue q5 = q1.f13(q1.lst, q.lst);
    auto endQueueDifBA = clock();
    double timeQueueDifBA = endQueueDifBA - startQueueDifBA;

    line();
    cout << " Разность B-A         |" << setw(11) << timeNodeDifAB << setw(10) << "|" << setw(9) << timeClassListDifAB << setw(9) << "|" << setw(8) << timeListDifAB << setw(8) << "|" << setw(8) << timeSetDifAB << setw(8) << "|" << setw(8) << timeVectorDifAB << setw(8) << "|" << setw(8) << timeQueueDifAB << setw(8) << "|" << endl;

    // 11. Симметричная разность

    // Для односвязного списка
    Node nd6;
    auto startNodeSymDif = clock();
    nd6.first = f14(nd1.first, nd.first);
    auto endNodeSymDif = clock();
    double timeNodeSymDif = endNodeSymDif - startNodeSymDif;

    // Для класса Список
    auto startClassListSymDif = clock();
    ClassList* clsLst6 = clsLst.f14(clsLst1.first, clsLst.first);
    auto endClassListSymDif = clock();
    double timeClassListSymDif = endClassListSymDif - startClassListSymDif;

    // Для List
    auto startListSymDif = clock();
    List list6 = list.f14(list1.lst, list.lst);
    auto endListSymDif = clock();
    double timeListSymDif = endListSymDif - startListSymDif;

    // Для Set
    auto startSetSymDif = clock();
    Set st6 = st.f14(st1.lst, st.lst);
    auto endSetSymDif = clock();
    double timeSetSymDif = endSetSymDif - startSetSymDif;

    // Для Vector
    auto startVectorSymDif = clock();
    Vector vctr6 = vctr.f14(vctr1.lst, vctr.lst);
    auto endVectorSymDif = clock();
    double timeVectorSymDif = endVectorSymDif - startVectorSymDif;

    // Для queue
    auto startQueueSymDif = clock();
    Queue q6 = q.f14(q1.lst, q.lst);
    auto endQueueSymDif = clock();
    double timeQueueSymDif = endQueueSymDif - startQueueSymDif;
    line();
    cout << " Симметричная разность|" << setw(11) << timeNodeSymDif << setw(10) << "|" << setw(9) << timeClassListSymDif << setw(9) << "|" << setw(8) << timeListSymDif << setw(8) << "|" << setw(8) << timeSetSymDif << setw(8) << "|" << setw(8) << timeVectorSymDif << setw(8) << "|" << setw(8) << timeQueueSymDif << setw(8) << "|" << endl;
    line();

    return 0;
}