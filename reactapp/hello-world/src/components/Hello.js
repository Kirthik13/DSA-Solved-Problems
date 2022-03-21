import React from 'react'

const Hello=props=>{
    console.log(props);

    return (
        <div>

    <h1>hello {props.name} {props.heroName}</h1>
    {props.children}
        </div>
    )
        
    
//    return React.createElement(
//         'div',
//         {id:'hel',className:'hel2'},
//         React.createElement('h1',null,"hello world")
//     )
}

export default Hello