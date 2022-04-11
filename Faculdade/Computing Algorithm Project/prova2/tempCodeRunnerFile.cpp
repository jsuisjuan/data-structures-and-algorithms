
    cout << "=====================" << endl;
    cout << "Matriz Transposta" << endl;
    imprimeTranspostaMatriz(A);

    cout << "=====================" << endl;
    simetrica = simetricaMatriz(A);
    if (simetrica == 0)
    {
        cout << "A matriz nao e simetrica!" << endl;
    } 
    if (simetrica == 1) 
    {
        cout << "A matriz e simetrica!" << endl;
    }
    return 0;
}