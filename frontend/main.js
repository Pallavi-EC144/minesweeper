const SIZE = 8;

// Simple JS to render a static board
function renderBoard() {
    const board = document.getElementById('game-board');
    board.innerHTML = '';
    for(let i=0; i<SIZE; i++) {
        const row = document.createElement('div');
        for(let j=0; j<SIZE; j++) {
            const cell = document.createElement('div');
            cell.className = 'cell';
            cell.textContent = '*';
            // Add event listeners here for future interaction
            row.appendChild(cell);
        }
        board.appendChild(row);
    }
}

renderBoard();